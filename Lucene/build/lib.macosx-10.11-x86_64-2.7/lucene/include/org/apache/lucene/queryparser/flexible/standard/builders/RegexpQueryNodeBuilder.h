#ifndef org_apache_lucene_queryparser_flexible_standard_builders_RegexpQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_RegexpQueryNodeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class RegexpQuery;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
            }
          }
          namespace standard {
            namespace builders {
              class StandardQueryBuilder;
            }
          }
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
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace builders {

              class RegexpQueryNodeBuilder : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_build_261cecb0,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RegexpQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                RegexpQueryNodeBuilder(const RegexpQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                RegexpQueryNodeBuilder();

                ::org::apache::lucene::search::RegexpQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
              };
            }
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
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace builders {
              extern PyTypeObject PY_TYPE(RegexpQueryNodeBuilder);

              class t_RegexpQueryNodeBuilder {
              public:
                PyObject_HEAD
                RegexpQueryNodeBuilder object;
                static PyObject *wrap_Object(const RegexpQueryNodeBuilder&);
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
}

#endif
