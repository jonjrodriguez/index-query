#ifndef org_apache_lucene_analysis_compound_Lucene43CompoundWordTokenFilterBase_H
#define org_apache_lucene_analysis_compound_Lucene43CompoundWordTokenFilterBase_H

#include "org/apache/lucene/analysis/TokenFilter.h"

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
        namespace compound {

          class Lucene43CompoundWordTokenFilterBase : public ::org::apache::lucene::analysis::TokenFilter {
          public:
            enum {
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              mid_decompose_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene43CompoundWordTokenFilterBase(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene43CompoundWordTokenFilterBase(const Lucene43CompoundWordTokenFilterBase& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MAX_SUBWORD_SIZE;
            static jint DEFAULT_MIN_SUBWORD_SIZE;
            static jint DEFAULT_MIN_WORD_SIZE;

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
        namespace compound {
          extern PyTypeObject PY_TYPE(Lucene43CompoundWordTokenFilterBase);

          class t_Lucene43CompoundWordTokenFilterBase {
          public:
            PyObject_HEAD
            Lucene43CompoundWordTokenFilterBase object;
            static PyObject *wrap_Object(const Lucene43CompoundWordTokenFilterBase&);
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
