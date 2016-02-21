#ifndef org_apache_lucene_util_automaton_Automaton_H
#define org_apache_lucene_util_automaton_Automaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Transition;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Automaton : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_addEpsilon_d8d154a6,
              mid_addTransition_d3236aa4,
              mid_addTransition_ca5a6f66,
              mid_copy_fc7cf394,
              mid_createState_54c6a179,
              mid_finishState_54c6a166,
              mid_getNextTransition_8209dac4,
              mid_getNumStates_54c6a179,
              mid_getNumTransitions_39c7bd23,
              mid_getSortedTransitions_14b6b645,
              mid_getTransition_9e3dac04,
              mid_initTransition_72087f31,
              mid_isAccept_39c7bd30,
              mid_isDeterministic_54c6a16a,
              mid_setAccept_b3a85a05,
              mid_step_d8d154b9,
              mid_toDot_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Automaton(const Automaton& obj) : ::java::lang::Object(obj) {}

            Automaton();

            void addEpsilon(jint, jint) const;
            void addTransition(jint, jint, jint) const;
            void addTransition(jint, jint, jint, jint) const;
            void copy(const Automaton &) const;
            jint createState() const;
            void finishState() const;
            void getNextTransition(const ::org::apache::lucene::util::automaton::Transition &) const;
            jint getNumStates() const;
            jint getNumTransitions(jint) const;
            JArray< JArray< ::org::apache::lucene::util::automaton::Transition > > getSortedTransitions() const;
            void getTransition(jint, jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jint initTransition(jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jboolean isAccept(jint) const;
            jboolean isDeterministic() const;
            void setAccept(jint, jboolean) const;
            jint step(jint, jint) const;
            ::java::lang::String toDot() const;
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
          extern PyTypeObject PY_TYPE(Automaton);

          class t_Automaton {
          public:
            PyObject_HEAD
            Automaton object;
            static PyObject *wrap_Object(const Automaton&);
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
