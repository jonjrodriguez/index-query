#ifndef org_apache_lucene_util_packed_PackedLongValues_H
#define org_apache_lucene_util_packed_PackedLongValues_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace packed {
          class PackedLongValues$Builder;
          class PackedLongValues$Iterator;
        }
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
      namespace util {
        namespace packed {

          class PackedLongValues : public ::org::apache::lucene::util::LongValues {
          public:
            enum {
              mid_deltaPackedBuilder_d1198cef,
              mid_deltaPackedBuilder_2323d9c5,
              mid_get_0ee6df33,
              mid_iterator_c6b63c88,
              mid_monotonicBuilder_d1198cef,
              mid_monotonicBuilder_2323d9c5,
              mid_packedBuilder_d1198cef,
              mid_packedBuilder_2323d9c5,
              mid_ramBytesUsed_54c6a17a,
              mid_size_54c6a17a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedLongValues(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            PackedLongValues(const PackedLongValues& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            static ::org::apache::lucene::util::packed::PackedLongValues$Builder deltaPackedBuilder(jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder deltaPackedBuilder(jint, jfloat);
            jlong get(jlong) const;
            ::org::apache::lucene::util::packed::PackedLongValues$Iterator iterator() const;
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder monotonicBuilder(jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder monotonicBuilder(jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder packedBuilder(jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder packedBuilder(jint, jfloat);
            jlong ramBytesUsed() const;
            jlong size() const;
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
      namespace util {
        namespace packed {
          extern PyTypeObject PY_TYPE(PackedLongValues);

          class t_PackedLongValues {
          public:
            PyObject_HEAD
            PackedLongValues object;
            static PyObject *wrap_Object(const PackedLongValues&);
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
