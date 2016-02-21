#ifndef org_apache_lucene_util_automaton_Operations_H
#define org_apache_lucene_util_automaton_Operations_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace automaton {
          class Automaton;
        }
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
    class List;
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Operations : public ::java::lang::Object {
          public:
            enum {
              mid_complement_7aca8e1f,
              mid_concatenate_3449867a,
              mid_concatenate_fa852915,
              mid_determinize_7aca8e1f,
              mid_getCommonPrefix_c2342f4b,
              mid_getCommonPrefixBytesRef_b889220f,
              mid_getCommonSuffixBytesRef_b889220f,
              mid_getFiniteStrings_4e50ce8f,
              mid_hasDeadStates_fc7cf398,
              mid_hasDeadStatesFromInitial_fc7cf398,
              mid_hasDeadStatesToAccept_fc7cf398,
              mid_intersection_fa852915,
              mid_isEmpty_fc7cf398,
              mid_isFinite_fc7cf398,
              mid_isTotal_fc7cf398,
              mid_minus_fa852915,
              mid_optional_7aca8e1f,
              mid_removeDeadStates_7aca8e1f,
              mid_repeat_7aca8e1f,
              mid_repeat_df52766d,
              mid_repeat_6e1cfc6f,
              mid_reverse_7aca8e1f,
              mid_run_7b2da936,
              mid_run_b3a03722,
              mid_sameLanguage_7d21690e,
              mid_subsetOf_7d21690e,
              mid_union_40d33194,
              mid_union_fa852915,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Operations(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Operations(const Operations& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::util::automaton::Automaton complement(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::java::util::List &);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton determinize(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::java::lang::String getCommonPrefix(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonPrefixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonSuffixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::java::util::Set getFiniteStrings(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static jboolean hasDeadStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStatesFromInitial(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStatesToAccept(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton intersection(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isEmpty(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isFinite(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isTotal(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton minus(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton optional(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton removeDeadStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton reverse(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean run(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::IntsRef &);
            static jboolean run(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::String &);
            static jboolean sameLanguage(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean subsetOf(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::java::util::Collection &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
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
      namespace util {
        namespace automaton {
          extern PyTypeObject PY_TYPE(Operations);

          class t_Operations {
          public:
            PyObject_HEAD
            Operations object;
            static PyObject *wrap_Object(const Operations&);
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
