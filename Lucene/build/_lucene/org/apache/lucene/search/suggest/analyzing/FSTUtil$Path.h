#ifndef org_apache_lucene_search_suggest_analyzing_FSTUtil$Path_H
#define org_apache_lucene_search_suggest_analyzing_FSTUtil$Path_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRefBuilder;
        namespace fst {
          class FST$Arc;
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
      namespace search {
        namespace suggest {
          namespace analyzing {

            class FSTUtil$Path : public ::java::lang::Object {
            public:
              enum {
                mid_init$_887ce3f0,
                max_mid
              };

              enum {
                fid_fstNode,
                fid_input,
                fid_state,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTUtil$Path(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              FSTUtil$Path(const FSTUtil$Path& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::util::fst::FST$Arc _get_fstNode() const;
              ::org::apache::lucene::util::IntsRefBuilder _get_input() const;
              jint _get_state() const;

              FSTUtil$Path(jint, const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, const ::org::apache::lucene::util::IntsRefBuilder &);
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
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyTypeObject PY_TYPE(FSTUtil$Path);

            class t_FSTUtil$Path {
            public:
              PyObject_HEAD
              FSTUtil$Path object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FSTUtil$Path *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FSTUtil$Path&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FSTUtil$Path&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
