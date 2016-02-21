#ifndef org_apache_lucene_util_CharsRefBuilder_H
#define org_apache_lucene_util_CharsRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class CharsRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Appendable;
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CharsRefBuilder : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_append_c19c439b,
            mid_append_a1a48567,
            mid_append_6f0bb356,
            mid_append_d8f1527f,
            mid_charAt_39c7bd29,
            mid_chars_dab10e7f,
            mid_clear_54c6a166,
            mid_copyChars_ee7999c6,
            mid_copyChars_6f0bb356,
            mid_copyUTF8Bytes_7bc03dc4,
            mid_copyUTF8Bytes_86f4435f,
            mid_equals_290588e2,
            mid_get_399267bb,
            mid_grow_39c7bd3c,
            mid_hashCode_54c6a179,
            mid_length_54c6a179,
            mid_setCharAt_83eec158,
            mid_setLength_39c7bd3c,
            mid_toCharsRef_399267bb,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharsRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          CharsRefBuilder(const CharsRefBuilder& obj) : ::java::lang::Object(obj) {}

          CharsRefBuilder();

          CharsRefBuilder append(jchar) const;
          CharsRefBuilder append(const ::java::lang::CharSequence &) const;
          void append(const JArray< jchar > &, jint, jint) const;
          CharsRefBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
          jchar charAt(jint) const;
          JArray< jchar > chars() const;
          void clear() const;
          void copyChars(const ::org::apache::lucene::util::CharsRef &) const;
          void copyChars(const JArray< jchar > &, jint, jint) const;
          void copyUTF8Bytes(const ::org::apache::lucene::util::BytesRef &) const;
          void copyUTF8Bytes(const JArray< jbyte > &, jint, jint) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::CharsRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint length() const;
          void setCharAt(jint, jchar) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::CharsRef toCharsRef() const;
          ::java::lang::String toString() const;
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
        extern PyTypeObject PY_TYPE(CharsRefBuilder);

        class t_CharsRefBuilder {
        public:
          PyObject_HEAD
          CharsRefBuilder object;
          static PyObject *wrap_Object(const CharsRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
