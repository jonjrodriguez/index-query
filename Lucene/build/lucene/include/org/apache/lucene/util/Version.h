#ifndef org_apache_lucene_util_Version_H
#define org_apache_lucene_util_Version_H

#include "java/lang/Object.h"

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
      namespace util {

        class Version : public ::java::lang::Object {
        public:
          enum {
            mid_equals_290588e2,
            mid_hashCode_54c6a179,
            mid_onOrAfter_0d96cf3f,
            mid_parse_54fbdb70,
            mid_parseLeniently_54fbdb70,
            mid_toString_14c7b5c5,
            max_mid
          };

          enum {
            fid_bugfix,
            fid_major,
            fid_minor,
            fid_prerelease,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Version(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          Version(const Version& obj) : ::java::lang::Object(obj) {}

          static Version *LATEST;
          static Version *LUCENE_30;
          static Version *LUCENE_31;
          static Version *LUCENE_32;
          static Version *LUCENE_33;
          static Version *LUCENE_34;
          static Version *LUCENE_35;
          static Version *LUCENE_36;
          static Version *LUCENE_3_0;
          static Version *LUCENE_3_0_0;
          static Version *LUCENE_3_1;
          static Version *LUCENE_3_1_0;
          static Version *LUCENE_3_2;
          static Version *LUCENE_3_2_0;
          static Version *LUCENE_3_3;
          static Version *LUCENE_3_3_0;
          static Version *LUCENE_3_4;
          static Version *LUCENE_3_4_0;
          static Version *LUCENE_3_5;
          static Version *LUCENE_3_5_0;
          static Version *LUCENE_3_6;
          static Version *LUCENE_3_6_0;
          static Version *LUCENE_40;
          static Version *LUCENE_41;
          static Version *LUCENE_42;
          static Version *LUCENE_43;
          static Version *LUCENE_44;
          static Version *LUCENE_45;
          static Version *LUCENE_46;
          static Version *LUCENE_47;
          static Version *LUCENE_48;
          static Version *LUCENE_4_0;
          static Version *LUCENE_4_0_0;
          static Version *LUCENE_4_0_0_ALPHA;
          static Version *LUCENE_4_0_0_BETA;
          static Version *LUCENE_4_1;
          static Version *LUCENE_4_10_0;
          static Version *LUCENE_4_10_1;
          static Version *LUCENE_4_1_0;
          static Version *LUCENE_4_2;
          static Version *LUCENE_4_2_0;
          static Version *LUCENE_4_2_1;
          static Version *LUCENE_4_3;
          static Version *LUCENE_4_3_0;
          static Version *LUCENE_4_3_1;
          static Version *LUCENE_4_4;
          static Version *LUCENE_4_4_0;
          static Version *LUCENE_4_5;
          static Version *LUCENE_4_5_0;
          static Version *LUCENE_4_5_1;
          static Version *LUCENE_4_6;
          static Version *LUCENE_4_6_0;
          static Version *LUCENE_4_6_1;
          static Version *LUCENE_4_7;
          static Version *LUCENE_4_7_0;
          static Version *LUCENE_4_7_1;
          static Version *LUCENE_4_7_2;
          static Version *LUCENE_4_8;
          static Version *LUCENE_4_8_0;
          static Version *LUCENE_4_8_1;
          static Version *LUCENE_4_9;
          static Version *LUCENE_4_9_0;
          static Version *LUCENE_4_9_1;
          static Version *LUCENE_CURRENT;

          jint _get_bugfix() const;
          jint _get_major() const;
          jint _get_minor() const;
          jint _get_prerelease() const;

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean onOrAfter(const Version &) const;
          static Version parse(const ::java::lang::String &);
          static Version parseLeniently(const ::java::lang::String &);
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(Version);

        class t_Version {
        public:
          PyObject_HEAD
          Version object;
          static PyObject *wrap_Object(const Version&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
