#ifndef org_apache_lucene_queries_function_valuesource_PowFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_PowFloatFunction_H

#include "org/apache/lucene/queries/function/valuesource/DualFloatFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class ValueSource;
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
      namespace queries {
        namespace function {
          namespace valuesource {

            class PowFloatFunction : public ::org::apache::lucene::queries::function::valuesource::DualFloatFunction {
            public:
              enum {
                mid_init$_74aa307e,
                mid_name_14c7b5c5,
                mid_func_3711414a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PowFloatFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::DualFloatFunction(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              PowFloatFunction(const PowFloatFunction& obj) : ::org::apache::lucene::queries::function::valuesource::DualFloatFunction(obj) {}

              PowFloatFunction(const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {
            extern PyTypeObject PY_TYPE(PowFloatFunction);

            class t_PowFloatFunction {
            public:
              PyObject_HEAD
              PowFloatFunction object;
              static PyObject *wrap_Object(const PowFloatFunction&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
