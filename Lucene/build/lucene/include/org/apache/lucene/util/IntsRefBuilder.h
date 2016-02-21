#ifndef org_apache_lucene_util_IntsRefBuilder_H
#define org_apache_lucene_util_IntsRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        class BytesRef;
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

        class IntsRefBuilder : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_append_39c7bd3c,
            mid_clear_54c6a166,
            mid_copyInts_4defa0e8,
            mid_copyInts_3e1ea22c,
            mid_copyUTF8Bytes_7bc03dc4,
            mid_equals_290588e2,
            mid_get_5b734841,
            mid_grow_39c7bd3c,
            mid_hashCode_54c6a179,
            mid_intAt_39c7bd23,
            mid_ints_dab10e75,
            mid_length_54c6a179,
            mid_setIntAt_d8d154a6,
            mid_setLength_39c7bd3c,
            mid_toIntsRef_5b734841,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntsRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IntsRefBuilder(const IntsRefBuilder& obj) : ::java::lang::Object(obj) {}

          IntsRefBuilder();

          void append(jint) const;
          void clear() const;
          void copyInts(const ::org::apache::lucene::util::IntsRef &) const;
          void copyInts(const JArray< jint > &, jint, jint) const;
          void copyUTF8Bytes(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::IntsRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint intAt(jint) const;
          JArray< jint > ints() const;
          jint length() const;
          void setIntAt(jint, jint) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::IntsRef toIntsRef() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(IntsRefBuilder);

        class t_IntsRefBuilder {
        public:
          PyObject_HEAD
          IntsRefBuilder object;
          static PyObject *wrap_Object(const IntsRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
