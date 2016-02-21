#!/usr/bin/env python

import lucene
from src.retriever import SearchIndex
from flask import Flask, flash, redirect, request, render_template, url_for

app = Flask(__name__)
app.debug = True
app.secret_key = '\x9e\x877b\xa7g\xe6\x8d\x1bW\xee\xe0\xab\xb0\xf12\xab\x96\xc3\x87\x84\xdb8\x19'

@app.route('/')
def index():
    return render_template('index.html', lucene=lucene.VERSION)

@app.route('/search')
def search():
    query = request.args.get('q').strip()

    if not query:
        flash('Please enter a search query')
        return redirect(url_for('index'))

    searcher = SearchIndex('src/index')
    results = searcher.search(query)

    return render_template('search.html', query=query,results=results)