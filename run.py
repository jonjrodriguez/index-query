#!/usr/bin/env python

import argparse, lucene

from src.indexer import IndexFiles
from src.retriever import SearchIndex
from web.index import app

def main():
	parser = argparse.ArgumentParser(description='Make use of Lucene Index and Search functionality with defaults')

	parser.add_argument('method', choices=['index', 'search', 'serve'], help='The functionality you wish to invoke')

	args = parser.parse_args()

	if args.method == 'index':
		index('src/index', 'docs')
	elif args.method == 'search':
		search('src/index')
	else:
		app.run()

def index(indexPath, docsPath):
	indexer = IndexFiles(indexPath)

	print "Indexing documents"

	try:
	    numIndexed = indexer.index(docsPath)
	except Exception, e:
	    print "Failed: ", e
	    raise e
	else:
	    indexer.close()

	print "Indexed %i documents" % numIndexed

def search(indexPath):
	searcher = SearchIndex(indexPath)

	query = raw_input("Query:")

	print "Searching for:", query

	try:
		results = searcher.search(query)
	except Exception, e:
		print "Failed: ", e
		raise e

	print "%s total matching documents." % len(results)

	for result in results:
		print
		print "path:", result['path']
		print "title:", result['title']
		print "score:", result['score']

if __name__ == '__main__':
	lucene.initVM(vmargs=['-Djava.awt.headless=true'])

	main()