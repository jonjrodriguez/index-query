#ifndef org_apache_lucene_codecs_lucene42_Lucene42NormsFormat_H
#define org_apache_lucene_codecs_lucene42_Lucene42NormsFormat_H

#include "org/apache/lucene/codecs/NormsFormat.h"

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
        namespace lucene42 {

          class Lucene42NormsFormat : public ::org::apache::lucene::codecs::NormsFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_06298cab,
              mid_normsConsumer_025deb44,
              mid_normsProducer_9b0d4e4a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene42NormsFormat(jobject obj) : ::org::apache::lucene::codecs::NormsFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene42NormsFormat(const Lucene42NormsFormat& obj) : ::org::apache::lucene::codecs::NormsFormat(obj) {}

            Lucene42NormsFormat();
            Lucene42NormsFormat(jfloat);

            ::org::apache::lucene::codecs::DocValuesConsumer normsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::DocValuesProducer normsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
        namespace lucene42 {
          extern PyTypeObject PY_TYPE(Lucene42NormsFormat);

          class t_Lucene42NormsFormat {
          public:
            PyObject_HEAD
            Lucene42NormsFormat object;
            static PyObject *wrap_Object(const Lucene42NormsFormat&);
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
