#ifndef org_apache_lucene_analysis_standard_UAX29URLEmailAnalyzer_H
#define org_apache_lucene_analysis_standard_UAX29URLEmailAnalyzer_H

#include "org/apache/lucene/analysis/util/StopwordAnalyzerBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        namespace util {
          class CharArraySet;
        }
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
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {

          class UAX29URLEmailAnalyzer : public ::org::apache::lucene::analysis::util::StopwordAnalyzerBase {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_cf2e3c10,
              mid_init$_0d96cf33,
              mid_init$_6d1f9881,
              mid_init$_7997a391,
              mid_init$_83eafe28,
              mid_getMaxTokenLength_54c6a179,
              mid_setMaxTokenLength_39c7bd3c,
              mid_createComponents_1be39cae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UAX29URLEmailAnalyzer(jobject obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            UAX29URLEmailAnalyzer(const UAX29URLEmailAnalyzer& obj) : ::org::apache::lucene::analysis::util::StopwordAnalyzerBase(obj) {}

            static jint DEFAULT_MAX_TOKEN_LENGTH;
            static ::org::apache::lucene::analysis::util::CharArraySet *STOP_WORDS_SET;

            UAX29URLEmailAnalyzer();
            UAX29URLEmailAnalyzer(const ::java::io::Reader &);
            UAX29URLEmailAnalyzer(const ::org::apache::lucene::util::Version &);
            UAX29URLEmailAnalyzer(const ::org::apache::lucene::analysis::util::CharArraySet &);
            UAX29URLEmailAnalyzer(const ::org::apache::lucene::util::Version &, const ::java::io::Reader &);
            UAX29URLEmailAnalyzer(const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::analysis::util::CharArraySet &);

            jint getMaxTokenLength() const;
            void setMaxTokenLength(jint) const;
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
        namespace standard {
          extern PyTypeObject PY_TYPE(UAX29URLEmailAnalyzer);

          class t_UAX29URLEmailAnalyzer {
          public:
            PyObject_HEAD
            UAX29URLEmailAnalyzer object;
            static PyObject *wrap_Object(const UAX29URLEmailAnalyzer&);
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
