#!/usr/bin/env python

import argparse, sys, os, lucene

from bs4 import BeautifulSoup
from java.io import File
from org.apache.lucene.analysis.core import StopFilter
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.document import Document, Field, StringField, TextField
from org.apache.lucene.index import IndexWriter, IndexWriterConfig
from org.apache.lucene.store import SimpleFSDirectory
from org.apache.lucene.util import Version

class IndexFiles(object):
    def __init__(self, indexPath):
        self.base_dir = os.path.dirname(os.path.abspath(sys.argv[0]))
        indexDir = os.path.join(self.base_dir, indexPath)

        if not os.path.exists(indexDir):
            os.mkdir(indexDir)

        store = SimpleFSDirectory(File(indexDir))

        stop_set = StopFilter.makeStopSet(Version.LUCENE_CURRENT, [])
        analyzer = StandardAnalyzer(Version.LUCENE_CURRENT, stop_set)

        config = IndexWriterConfig(Version.LUCENE_CURRENT, analyzer)
        config.setOpenMode(IndexWriterConfig.OpenMode.CREATE)
        
        self.writer = IndexWriter(store, config)

    def index(self, docsPath):
        for docsPath, dirnames, filenames in os.walk(docsPath):
            for filename in filenames:
                if self.filter(filename):
            	   self.indexFile(filename, docsPath)

    	self.writer.commit()

        return self.writer.numDocs()

    def indexFile(self, filename, docsPath):
		try:
			doc = self.getDocument(filename, docsPath)

			self.writer.addDocument(doc)
		except Exception, e:
			print "Failed in indexFile:", e

    def getDocument(self, filename, docsPath):
        title, path, content = self.parseHtml(filename, docsPath)

        doc = Document()
        doc.add(Field("title", title, StringField.TYPE_STORED))
        doc.add(Field("path", path, StringField.TYPE_STORED))

        if len(content) > 0:
            doc.add(Field("contents", content, TextField.TYPE_STORED))
        else:
            print "Warning: No content in %s" % filename

        return doc

    def parseHtml(self, filename, docsPath):
        path = os.path.join(docsPath, filename)

        soup = BeautifulSoup(open(path), 'html.parser')

        if soup.title:
            title = soup.title.get_text().strip()
        elif soup.find(['h1', 'h2', 'h3']):
            title = " ".join(soup.find(['h1', 'h2', 'h3']).get_text().split())
        else:
            title = filename

        return title, path, soup.get_text()

    def close(self):
    	self.writer.close()

    def filter(self, filename):
        return filename.endswith('.html') or filename.endswith('.htm')

def main():
    parser = argparse.ArgumentParser(description='Index a document collection')

    parser.add_argument('-index', metavar="INDEX_PATH", default='index', help='The relative path where the index will be stored (default: index)')
    parser.add_argument('-docs', metavar="DOCS_PATH", default='../docs', help='The path where the documents are stored (default: ../docs)')

    args = parser.parse_args()

    indexer = IndexFiles(args.index)

    print "Indexing documents"

    try:
        numIndexed = indexer.index(args.docs)
    except Exception, e:
        print "Failed: ", e
        raise e
    else:
        indexer.close()

    print "Indexed %i documents" % numIndexed

if __name__ == '__main__':
    lucene.initVM(vmargs=['-Djava.awt.headless=true'])

    main()