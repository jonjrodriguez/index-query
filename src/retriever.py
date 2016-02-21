#!/usr/bin/env python

import argparse, sys, os, lucene

from java.io import File
from org.apache.lucene.analysis.core import StopFilter
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.index import DirectoryReader
from org.apache.lucene.queryparser.classic import QueryParser
from org.apache.lucene.store import SimpleFSDirectory
from org.apache.lucene.search import IndexSearcher
from org.apache.lucene.util import Version

class SearchIndex(object):
	def __init__(self, indexPath):
		vm_env = lucene.getVMEnv()
		vm_env.attachCurrentThread()

		base_dir = os.path.dirname(os.path.abspath(sys.argv[0]))
		indexDir = SimpleFSDirectory(File(os.path.join(base_dir, indexPath)))
		self.searcher = IndexSearcher(DirectoryReader.open(indexDir))

		stop_set = StopFilter.makeStopSet(Version.LUCENE_CURRENT, [])
		analyzer = StandardAnalyzer(Version.LUCENE_CURRENT, stop_set)

		self.parser = QueryParser(Version.LUCENE_CURRENT, "contents", analyzer)


	def search(self, q):
		query = self.parser.parse(q)

		scoreDocs = self.searcher.search(query, 10).scoreDocs

		docs = []
		for scoreDoc in scoreDocs:
			doc = self.searcher.doc(scoreDoc.doc)
			docs.append({'score': scoreDoc.score, 'path': doc["path"], 'title': doc["title"]})

		del self.searcher

		return docs

def main():
	parser = argparse.ArgumentParser(description='Search a Lucene index')

	parser.add_argument('q', metavar="QUERY", help='The query to use to search the index')
	parser.add_argument('-index', metavar="INDEX_PATH", default='index', help='The relative path where the index is stored (default: index)')

	args = parser.parse_args()

	if not args.q:
		return

	print "Searching for:", args.q

	searcher = SearchIndex(args.index)

	try:
		results = searcher.search(args.q)
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