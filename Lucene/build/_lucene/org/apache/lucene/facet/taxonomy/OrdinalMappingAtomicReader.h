#ifndef org_apache_lucene_facet_taxonomy_OrdinalMappingAtomicReader_H
#define org_apache_lucene_facet_taxonomy_OrdinalMappingAtomicReader_H

#include "org/apache/lucene/index/FilterAtomicReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig;
      }
      namespace index {
        class AtomicReader;
        class BinaryDocValues;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class OrdinalMappingAtomicReader : public ::org::apache::lucene::index::FilterAtomicReader {
          public:
            enum {
              mid_init$_bec2640d,
              mid_getBinaryDocValues_ecab96be,
              mid_encode_14756a33,
              mid_getOrdinalsReader_bb2aeceb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdinalMappingAtomicReader(jobject obj) : ::org::apache::lucene::index::FilterAtomicReader(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            OrdinalMappingAtomicReader(const OrdinalMappingAtomicReader& obj) : ::org::apache::lucene::index::FilterAtomicReader(obj) {}

            OrdinalMappingAtomicReader(const ::org::apache::lucene::index::AtomicReader &, const JArray< jint > &, const ::org::apache::lucene::facet::FacetsConfig &);

            ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
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
      namespace facet {
        namespace taxonomy {
          extern PyTypeObject PY_TYPE(OrdinalMappingAtomicReader);

          class t_OrdinalMappingAtomicReader {
          public:
            PyObject_HEAD
            OrdinalMappingAtomicReader object;
            static PyObject *wrap_Object(const OrdinalMappingAtomicReader&);
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
