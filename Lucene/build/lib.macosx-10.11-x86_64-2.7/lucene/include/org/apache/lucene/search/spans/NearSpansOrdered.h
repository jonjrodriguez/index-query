#ifndef org_apache_lucene_search_spans_NearSpansOrdered_H
#define org_apache_lucene_search_spans_NearSpansOrdered_H

#include "org/apache/lucene/search/spans/Spans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class TermContext;
        class Term;
        class AtomicReaderContext;
      }
      namespace search {
        namespace spans {
          class SpanNearQuery;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
    class Collection;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {

          class NearSpansOrdered : public ::org::apache::lucene::search::spans::Spans {
          public:
            enum {
              mid_init$_a9b434a2,
              mid_init$_0f9019fb,
              mid_cost_54c6a17a,
              mid_doc_54c6a179,
              mid_end_54c6a179,
              mid_getPayload_2d2d7de4,
              mid_getSubSpans_dd49b8eb,
              mid_isPayloadAvailable_54c6a16a,
              mid_next_54c6a16a,
              mid_skipTo_39c7bd30,
              mid_start_54c6a179,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NearSpansOrdered(jobject obj) : ::org::apache::lucene::search::spans::Spans(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            NearSpansOrdered(const NearSpansOrdered& obj) : ::org::apache::lucene::search::spans::Spans(obj) {}

            NearSpansOrdered(const ::org::apache::lucene::search::spans::SpanNearQuery &, const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &, const ::java::util::Map &);
            NearSpansOrdered(const ::org::apache::lucene::search::spans::SpanNearQuery &, const ::org::apache::lucene::index::AtomicReaderContext &, const ::org::apache::lucene::util::Bits &, const ::java::util::Map &, jboolean);

            jlong cost() const;
            jint doc() const;
            jint end() const;
            ::java::util::Collection getPayload() const;
            JArray< ::org::apache::lucene::search::spans::Spans > getSubSpans() const;
            jboolean isPayloadAvailable() const;
            jboolean next() const;
            jboolean skipTo(jint) const;
            jint start() const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          extern PyTypeObject PY_TYPE(NearSpansOrdered);

          class t_NearSpansOrdered {
          public:
            PyObject_HEAD
            NearSpansOrdered object;
            static PyObject *wrap_Object(const NearSpansOrdered&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
