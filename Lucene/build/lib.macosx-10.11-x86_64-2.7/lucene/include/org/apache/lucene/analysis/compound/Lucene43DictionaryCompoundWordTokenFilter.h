#ifndef org_apache_lucene_analysis_compound_Lucene43DictionaryCompoundWordTokenFilter_H
#define org_apache_lucene_analysis_compound_Lucene43DictionaryCompoundWordTokenFilter_H

#include "org/apache/lucene/analysis/compound/Lucene43CompoundWordTokenFilterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArraySet;
        }
        class TokenStream;
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
      namespace analysis {
        namespace compound {

          class Lucene43DictionaryCompoundWordTokenFilter : public ::org::apache::lucene::analysis::compound::Lucene43CompoundWordTokenFilterBase {
          public:
            enum {
              mid_init$_64fb9de3,
              mid_init$_c165ef98,
              mid_decompose_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene43DictionaryCompoundWordTokenFilter(jobject obj) : ::org::apache::lucene::analysis::compound::Lucene43CompoundWordTokenFilterBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene43DictionaryCompoundWordTokenFilter(const Lucene43DictionaryCompoundWordTokenFilter& obj) : ::org::apache::lucene::analysis::compound::Lucene43CompoundWordTokenFilterBase(obj) {}

            Lucene43DictionaryCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::util::CharArraySet &);
            Lucene43DictionaryCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::util::CharArraySet &, jint, jint, jint, jboolean);
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
        namespace compound {
          extern PyTypeObject PY_TYPE(Lucene43DictionaryCompoundWordTokenFilter);

          class t_Lucene43DictionaryCompoundWordTokenFilter {
          public:
            PyObject_HEAD
            Lucene43DictionaryCompoundWordTokenFilter object;
            static PyObject *wrap_Object(const Lucene43DictionaryCompoundWordTokenFilter&);
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
