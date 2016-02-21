#ifndef org_apache_lucene_search_similarities_BasicModel_H
#define org_apache_lucene_search_similarities_BasicModel_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
        }
        class Explanation;
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
      namespace search {
        namespace similarities {

          class BasicModel : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_explain_05d4946a,
              mid_score_076760a9,
              mid_toString_14c7b5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BasicModel(const BasicModel& obj) : ::java::lang::Object(obj) {}

            BasicModel();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jfloat) const;
            jfloat score(const ::org::apache::lucene::search::similarities::BasicStats &, jfloat) const;
            ::java::lang::String toString() const;
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
      namespace search {
        namespace similarities {
          extern PyTypeObject PY_TYPE(BasicModel);

          class t_BasicModel {
          public:
            PyObject_HEAD
            BasicModel object;
            static PyObject *wrap_Object(const BasicModel&);
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
