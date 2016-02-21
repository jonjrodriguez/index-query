#ifndef org_apache_lucene_util_BytesRefBuilder_H
#define org_apache_lucene_util_BytesRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefBuilder : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_append_b2271687,
            mid_append_7bc03dc4,
            mid_append_96c112dc,
            mid_append_86f4435f,
            mid_byteAt_39c7bd28,
            mid_bytes_dab10e7e,
            mid_clear_54c6a166,
            mid_copyBytes_7bc03dc4,
            mid_copyBytes_96c112dc,
            mid_copyBytes_86f4435f,
            mid_copyChars_a8afc64a,
            mid_copyChars_6f0bb356,
            mid_copyChars_6cc8d7e2,
            mid_equals_290588e2,
            mid_get_4ae19461,
            mid_grow_39c7bd3c,
            mid_hashCode_54c6a179,
            mid_length_54c6a179,
            mid_setByteAt_58d0da5d,
            mid_setLength_39c7bd3c,
            mid_toBytesRef_4ae19461,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          BytesRefBuilder(const BytesRefBuilder& obj) : ::java::lang::Object(obj) {}

          BytesRefBuilder();

          void append(jbyte) const;
          void append(const ::org::apache::lucene::util::BytesRef &) const;
          void append(const BytesRefBuilder &) const;
          void append(const JArray< jbyte > &, jint, jint) const;
          jbyte byteAt(jint) const;
          JArray< jbyte > bytes() const;
          void clear() const;
          void copyBytes(const ::org::apache::lucene::util::BytesRef &) const;
          void copyBytes(const BytesRefBuilder &) const;
          void copyBytes(const JArray< jbyte > &, jint, jint) const;
          void copyChars(const ::java::lang::CharSequence &) const;
          void copyChars(const JArray< jchar > &, jint, jint) const;
          void copyChars(const ::java::lang::CharSequence &, jint, jint) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::BytesRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint length() const;
          void setByteAt(jint, jbyte) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::BytesRef toBytesRef() const;
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
        extern PyTypeObject PY_TYPE(BytesRefBuilder);

        class t_BytesRefBuilder {
        public:
          PyObject_HEAD
          BytesRefBuilder object;
          static PyObject *wrap_Object(const BytesRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
