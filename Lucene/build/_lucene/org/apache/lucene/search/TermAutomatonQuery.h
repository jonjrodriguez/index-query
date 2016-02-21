#ifndef org_apache_lucene_search_TermAutomatonQuery_H
#define org_apache_lucene_search_TermAutomatonQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class Term;
      }
      namespace search {
        class IndexSearcher;
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace util {
    class Set;
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

        class TermAutomatonQuery : public ::org::apache::lucene::search::Query {
        public:
          enum {
            mid_init$_5fdc3f48,
            mid_addAnyTransition_d8d154a6,
            mid_addTransition_490a7ef0,
            mid_addTransition_362d2138,
            mid_createState_54c6a179,
            mid_createWeight_367763cb,
            mid_equals_290588e2,
            mid_extractTerms_fb4f2b26,
            mid_finish_54c6a166,
            mid_hashCode_54c6a179,
            mid_setAccept_b3a85a05,
            mid_toDot_14c7b5c5,
            mid_toString_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermAutomatonQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          TermAutomatonQuery(const TermAutomatonQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          TermAutomatonQuery(const ::java::lang::String &);

          void addAnyTransition(jint, jint) const;
          void addTransition(jint, jint, const ::java::lang::String &) const;
          void addTransition(jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
          jint createState() const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void extractTerms(const ::java::util::Set &) const;
          void finish() const;
          jint hashCode() const;
          void setAccept(jint, jboolean) const;
          ::java::lang::String toDot() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(TermAutomatonQuery);

        class t_TermAutomatonQuery {
        public:
          PyObject_HEAD
          TermAutomatonQuery object;
          static PyObject *wrap_Object(const TermAutomatonQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
