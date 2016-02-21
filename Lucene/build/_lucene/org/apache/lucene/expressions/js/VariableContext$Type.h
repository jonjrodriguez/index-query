#ifndef org_apache_lucene_expressions_js_VariableContext$Type_H
#define org_apache_lucene_expressions_js_VariableContext$Type_H

#include "java/lang/Enum.h"

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
      namespace expressions {
        namespace js {

          class VariableContext$Type : public ::java::lang::Enum {
          public:
            enum {
              mid_valueOf_af8a4fdd,
              mid_values_eb78fcbf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VariableContext$Type(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            VariableContext$Type(const VariableContext$Type& obj) : ::java::lang::Enum(obj) {}

            static VariableContext$Type *INT_INDEX;
            static VariableContext$Type *MEMBER;
            static VariableContext$Type *STR_INDEX;

            static VariableContext$Type valueOf(const ::java::lang::String &);
            static JArray< VariableContext$Type > values();
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
      namespace expressions {
        namespace js {
          extern PyTypeObject PY_TYPE(VariableContext$Type);

          class t_VariableContext$Type {
          public:
            PyObject_HEAD
            VariableContext$Type object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_VariableContext$Type *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const VariableContext$Type&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const VariableContext$Type&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
