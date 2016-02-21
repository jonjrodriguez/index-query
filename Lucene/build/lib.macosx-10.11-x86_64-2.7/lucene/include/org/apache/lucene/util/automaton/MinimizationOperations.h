#ifndef org_apache_lucene_util_automaton_MinimizationOperations_H
#define org_apache_lucene_util_automaton_MinimizationOperations_H

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

          class MinimizationOperations : public ::java::lang::Object {
          public:
            enum {
              mid_minimize_7aca8e1f,
              mid_minimizeHopcroft_7aca8e1f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MinimizationOperations(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            MinimizationOperations(const MinimizationOperations& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::util::automaton::Automaton minimize(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton minimizeHopcroft(const ::org::apache::lucene::util::automaton::Automaton &);
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
          extern PyTypeObject PY_TYPE(MinimizationOperations);

          class t_MinimizationOperations {
          public:
            PyObject_HEAD
            MinimizationOperations object;
            static PyObject *wrap_Object(const MinimizationOperations&);
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
