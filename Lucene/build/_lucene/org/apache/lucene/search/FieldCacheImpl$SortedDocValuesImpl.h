#ifndef org_apache_lucene_search_FieldCacheImpl$SortedDocValuesImpl_H
#define org_apache_lucene_search_FieldCacheImpl$SortedDocValuesImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PagedBytes$Reader;
        class Accountable;
        namespace packed {
          class PackedInts$Reader;
          class PackedLongValues;
        }
      }
      namespace index {
        class SortedDocValues;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldCacheImpl$SortedDocValuesImpl : public ::java::lang::Object {
        public:
          enum {
            mid_init$_3bec9174,
            mid_iterator_57832734,
            mid_ramBytesUsed_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCacheImpl$SortedDocValuesImpl(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FieldCacheImpl$SortedDocValuesImpl(const FieldCacheImpl$SortedDocValuesImpl& obj) : ::java::lang::Object(obj) {}

          FieldCacheImpl$SortedDocValuesImpl(const ::org::apache::lucene::util::PagedBytes$Reader &, const ::org::apache::lucene::util::packed::PackedLongValues &, const ::org::apache::lucene::util::packed::PackedInts$Reader &, jint);

          ::org::apache::lucene::index::SortedDocValues iterator() const;
          jlong ramBytesUsed() const;
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
        extern PyTypeObject PY_TYPE(FieldCacheImpl$SortedDocValuesImpl);

        class t_FieldCacheImpl$SortedDocValuesImpl {
        public:
          PyObject_HEAD
          FieldCacheImpl$SortedDocValuesImpl object;
          static PyObject *wrap_Object(const FieldCacheImpl$SortedDocValuesImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
