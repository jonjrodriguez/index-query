#ifndef org_apache_lucene_util_automaton_Automata_H
#define org_apache_lucene_util_automaton_Automata_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class IllegalArgumentException;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Automata : public ::java::lang::Object {
          public:
            enum {
              mid_appendAnyChar_7813f815,
              mid_appendChar_c32b0597,
              mid_makeAnyChar_9b0d5999,
              mid_makeAnyString_9b0d5999,
              mid_makeChar_d5b8a843,
              mid_makeCharRange_42dcb2dd,
              mid_makeEmpty_9b0d5999,
              mid_makeEmptyString_9b0d5999,
              mid_makeInterval_86ba9f2f,
              mid_makeString_af13056f,
              mid_makeString_1c95d487,
              mid_makeStringUnion_40d33194,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Automata(const Automata& obj) : ::java::lang::Object(obj) {}

            static jint appendAnyChar(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static jint appendChar(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeAnyChar();
            static ::org::apache::lucene::util::automaton::Automaton makeAnyString();
            static ::org::apache::lucene::util::automaton::Automaton makeChar(jint);
            static ::org::apache::lucene::util::automaton::Automaton makeCharRange(jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeEmpty();
            static ::org::apache::lucene::util::automaton::Automaton makeEmptyString();
            static ::org::apache::lucene::util::automaton::Automaton makeInterval(jint, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeString(const ::java::lang::String &);
            static ::org::apache::lucene::util::automaton::Automaton makeString(const JArray< jint > &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeStringUnion(const ::java::util::Collection &);
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
        namespace automaton {
          extern PyTypeObject PY_TYPE(Automata);

          class t_Automata {
          public:
            PyObject_HEAD
            Automata object;
            static PyObject *wrap_Object(const Automata&);
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
