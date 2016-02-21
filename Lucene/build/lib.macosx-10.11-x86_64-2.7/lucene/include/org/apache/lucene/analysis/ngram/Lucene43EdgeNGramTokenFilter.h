#ifndef org_apache_lucene_analysis_ngram_Lucene43EdgeNGramTokenFilter_H
#define org_apache_lucene_analysis_ngram_Lucene43EdgeNGramTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ngram {

          class Lucene43EdgeNGramTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_init$_7f9e10a8,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene43EdgeNGramTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene43EdgeNGramTokenFilter(const Lucene43EdgeNGramTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MAX_GRAM_SIZE;
            static jint DEFAULT_MIN_GRAM_SIZE;

            Lucene43EdgeNGramTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jint);

            jboolean incrementToken() const;
            void reset() const;
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
        namespace ngram {
          extern PyTypeObject PY_TYPE(Lucene43EdgeNGramTokenFilter);

          class t_Lucene43EdgeNGramTokenFilter {
          public:
            PyObject_HEAD
            Lucene43EdgeNGramTokenFilter object;
            static PyObject *wrap_Object(const Lucene43EdgeNGramTokenFilter&);
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
