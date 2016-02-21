#ifndef org_apache_lucene_index_MultiDocValues$OrdinalMap_H
#define org_apache_lucene_index_MultiDocValues$OrdinalMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class LongValues;
      }
      namespace index {
        class SortedSetDocValues;
        class SortedDocValues;
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiDocValues$OrdinalMap : public ::java::lang::Object {
        public:
          enum {
            mid_build_78c390b1,
            mid_build_b46fc78e,
            mid_build_1c35266b,
            mid_getFirstSegmentNumber_0ee6df30,
            mid_getFirstSegmentOrd_0ee6df33,
            mid_getGlobalOrds_f3def9cd,
            mid_getValueCount_54c6a17a,
            mid_ramBytesUsed_54c6a17a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocValues$OrdinalMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues$OrdinalMap(const MultiDocValues$OrdinalMap& obj) : ::java::lang::Object(obj) {}

          static MultiDocValues$OrdinalMap build(const ::java::lang::Object &, const JArray< ::org::apache::lucene::index::SortedDocValues > &, jfloat);
          static MultiDocValues$OrdinalMap build(const ::java::lang::Object &, const JArray< ::org::apache::lucene::index::SortedSetDocValues > &, jfloat);
          static MultiDocValues$OrdinalMap build(const ::java::lang::Object &, const JArray< ::org::apache::lucene::index::TermsEnum > &, const JArray< jlong > &, jfloat);
          jint getFirstSegmentNumber(jlong) const;
          jlong getFirstSegmentOrd(jlong) const;
          ::org::apache::lucene::util::LongValues getGlobalOrds(jint) const;
          jlong getValueCount() const;
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
      namespace index {
        extern PyTypeObject PY_TYPE(MultiDocValues$OrdinalMap);

        class t_MultiDocValues$OrdinalMap {
        public:
          PyObject_HEAD
          MultiDocValues$OrdinalMap object;
          static PyObject *wrap_Object(const MultiDocValues$OrdinalMap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
