#ifndef org_apache_lucene_util_automaton_Automaton$Builder_H
#define org_apache_lucene_util_automaton_Automaton$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
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
        namespace automaton {

          class Automaton$Builder : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_addTransition_d3236aa4,
              mid_addTransition_ca5a6f66,
              mid_copy_fc7cf394,
              mid_createState_54c6a179,
              mid_finish_9b0d5999,
              mid_getNumStates_54c6a179,
              mid_isAccept_39c7bd30,
              mid_setAccept_b3a85a05,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automaton$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Automaton$Builder(const Automaton$Builder& obj) : ::java::lang::Object(obj) {}

            Automaton$Builder();

            void addTransition(jint, jint, jint) const;
            void addTransition(jint, jint, jint, jint) const;
            void copy(const ::org::apache::lucene::util::automaton::Automaton &) const;
            jint createState() const;
            ::org::apache::lucene::util::automaton::Automaton finish() const;
            jint getNumStates() const;
            jboolean isAccept(jint) const;
            void setAccept(jint, jboolean) const;
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
          extern PyTypeObject PY_TYPE(Automaton$Builder);

          class t_Automaton$Builder {
          public:
            PyObject_HEAD
            Automaton$Builder object;
            static PyObject *wrap_Object(const Automaton$Builder&);
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
