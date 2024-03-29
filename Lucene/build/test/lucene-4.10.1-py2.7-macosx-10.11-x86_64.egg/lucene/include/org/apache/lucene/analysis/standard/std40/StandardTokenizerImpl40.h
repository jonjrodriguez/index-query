#ifndef org_apache_lucene_analysis_standard_std40_StandardTokenizerImpl40_H
#define org_apache_lucene_analysis_standard_std40_StandardTokenizerImpl40_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
        }
        namespace standard {
          class StandardTokenizerInterface;
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
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {
          namespace std40 {

            class StandardTokenizerImpl40 : public ::java::lang::Object {
            public:
              enum {
                mid_init$_cf2e3c10,
                mid_getNextToken_54c6a179,
                mid_getText_64c709f2,
                mid_setBufferSize_39c7bd3c,
                mid_yybegin_39c7bd3c,
                mid_yychar_54c6a179,
                mid_yycharat_39c7bd29,
                mid_yyclose_54c6a166,
                mid_yylength_54c6a179,
                mid_yypushback_39c7bd3c,
                mid_yyreset_cf2e3c10,
                mid_yystate_54c6a179,
                mid_yytext_14c7b5c5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StandardTokenizerImpl40(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              StandardTokenizerImpl40(const StandardTokenizerImpl40& obj) : ::java::lang::Object(obj) {}

              static jint HANGUL_TYPE;
              static jint HIRAGANA_TYPE;
              static jint IDEOGRAPHIC_TYPE;
              static jint KATAKANA_TYPE;
              static jint NUMERIC_TYPE;
              static jint SOUTH_EAST_ASIAN_TYPE;
              static jint WORD_TYPE;
              static jint YYEOF;
              static jint YYINITIAL;

              StandardTokenizerImpl40(const ::java::io::Reader &);

              jint getNextToken() const;
              void getText(const ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute &) const;
              void setBufferSize(jint) const;
              void yybegin(jint) const;
              jint yychar() const;
              jchar yycharat(jint) const;
              void yyclose() const;
              jint yylength() const;
              void yypushback(jint) const;
              void yyreset(const ::java::io::Reader &) const;
              jint yystate() const;
              ::java::lang::String yytext() const;
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
      namespace analysis {
        namespace standard {
          namespace std40 {
            extern PyTypeObject PY_TYPE(StandardTokenizerImpl40);

            class t_StandardTokenizerImpl40 {
            public:
              PyObject_HEAD
              StandardTokenizerImpl40 object;
              static PyObject *wrap_Object(const StandardTokenizerImpl40&);
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

#endif
