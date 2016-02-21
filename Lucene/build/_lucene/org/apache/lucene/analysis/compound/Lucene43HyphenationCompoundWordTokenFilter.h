#ifndef org_apache_lucene_analysis_compound_Lucene43HyphenationCompoundWordTokenFilter_H
#define org_apache_lucene_analysis_compound_Lucene43HyphenationCompoundWordTokenFilter_H

#include "org/apache/lucene/analysis/compound/Lucene43CompoundWordTokenFilterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArraySet;
        }
        class TokenStream;
        namespace compound {
          namespace hyphenation {
            class HyphenationTree;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class File;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {

          class Lucene43HyphenationCompoundWordTokenFilter : public ::org::apache::lucene::analysis::compound::Lucene43CompoundWordTokenFilterBase {
          public:
            enum {
              mid_init$_9fc9df59,
              mid_init$_928921fa,
              mid_init$_b555ce7d,
              mid_init$_d8bc9319,
              mid_getHyphenationTree_5c26e2ec,
              mid_getHyphenationTree_70e8a373,
              mid_decompose_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene43HyphenationCompoundWordTokenFilter(jobject obj) : ::org::apache::lucene::analysis::compound::Lucene43CompoundWordTokenFilterBase(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene43HyphenationCompoundWordTokenFilter(const Lucene43HyphenationCompoundWordTokenFilter& obj) : ::org::apache::lucene::analysis::compound::Lucene43CompoundWordTokenFilterBase(obj) {}

            Lucene43HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &);
            Lucene43HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, const ::org::apache::lucene::analysis::util::CharArraySet &);
            Lucene43HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, jint, jint, jint);
            Lucene43HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, const ::org::apache::lucene::analysis::util::CharArraySet &, jint, jint, jint, jboolean);

            static ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree getHyphenationTree(const ::java::lang::String &);
            static ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree getHyphenationTree(const ::java::io::File &);
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
          extern PyTypeObject PY_TYPE(Lucene43HyphenationCompoundWordTokenFilter);

          class t_Lucene43HyphenationCompoundWordTokenFilter {
          public:
            PyObject_HEAD
            Lucene43HyphenationCompoundWordTokenFilter object;
            static PyObject *wrap_Object(const Lucene43HyphenationCompoundWordTokenFilter&);
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
