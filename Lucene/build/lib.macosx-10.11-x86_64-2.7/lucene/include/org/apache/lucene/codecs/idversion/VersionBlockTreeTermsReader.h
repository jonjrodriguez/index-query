#ifndef org_apache_lucene_codecs_idversion_VersionBlockTreeTermsReader_H
#define org_apache_lucene_codecs_idversion_VersionBlockTreeTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfo;
        class FieldInfos;
        class Terms;
      }
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace codecs {
        class PostingsReaderBase;
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
    class Iterator;
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
        namespace idversion {

          class VersionBlockTreeTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
          public:
            enum {
              mid_init$_1c92d475,
              mid_checkIntegrity_54c6a166,
              mid_close_54c6a166,
              mid_iterator_40858c90,
              mid_ramBytesUsed_54c6a17a,
              mid_size_54c6a179,
              mid_terms_ee262ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VersionBlockTreeTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            VersionBlockTreeTermsReader(const VersionBlockTreeTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            VersionBlockTreeTermsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &);

            void checkIntegrity() const;
            void close() const;
            ::java::util::Iterator iterator() const;
            jlong ramBytesUsed() const;
            jint size() const;
            ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        namespace idversion {
          extern PyTypeObject PY_TYPE(VersionBlockTreeTermsReader);

          class t_VersionBlockTreeTermsReader {
          public:
            PyObject_HEAD
            VersionBlockTreeTermsReader object;
            static PyObject *wrap_Object(const VersionBlockTreeTermsReader&);
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
