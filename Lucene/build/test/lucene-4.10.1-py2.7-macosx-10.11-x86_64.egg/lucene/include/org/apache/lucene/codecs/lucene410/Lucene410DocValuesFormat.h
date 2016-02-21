#ifndef org_apache_lucene_codecs_lucene410_Lucene410DocValuesFormat_H
#define org_apache_lucene_codecs_lucene410_Lucene410DocValuesFormat_H

#include "org/apache/lucene/codecs/DocValuesFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class DocValuesConsumer;
        class DocValuesProducer;
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
      namespace codecs {
        namespace lucene410 {

          class Lucene410DocValuesFormat : public ::org::apache::lucene::codecs::DocValuesFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_fieldsConsumer_025deb44,
              mid_fieldsProducer_9b0d4e4a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene410DocValuesFormat(jobject obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene410DocValuesFormat(const Lucene410DocValuesFormat& obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {}

            Lucene410DocValuesFormat();

            ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
      namespace codecs {
        namespace lucene410 {
          extern PyTypeObject PY_TYPE(Lucene410DocValuesFormat);

          class t_Lucene410DocValuesFormat {
          public:
            PyObject_HEAD
            Lucene410DocValuesFormat object;
            static PyObject *wrap_Object(const Lucene410DocValuesFormat&);
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
