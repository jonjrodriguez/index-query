#ifndef org_apache_lucene_analysis_de_GermanStemmer_H
#define org_apache_lucene_analysis_de_GermanStemmer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace de {

          class GermanStemmer : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_stem_97a5258f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GermanStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            GermanStemmer(const GermanStemmer& obj) : ::java::lang::Object(obj) {}

            GermanStemmer();
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
      namespace analysis {
        namespace de {
          extern PyTypeObject PY_TYPE(GermanStemmer);

          class t_GermanStemmer {
          public:
            PyObject_HEAD
            GermanStemmer object;
            static PyObject *wrap_Object(const GermanStemmer&);
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
