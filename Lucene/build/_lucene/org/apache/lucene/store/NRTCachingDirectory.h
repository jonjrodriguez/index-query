#ifndef org_apache_lucene_store_NRTCachingDirectory_H
#define org_apache_lucene_store_NRTCachingDirectory_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class IndexOutput;
        class Directory;
        class IndexInput;
        class IOContext;
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
    class Collection;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class NRTCachingDirectory : public ::org::apache::lucene::store::FilterDirectory {
        public:
          enum {
            mid_init$_a6a83a1c,
            mid_close_54c6a166,
            mid_createOutput_5ad5358d,
            mid_deleteFile_5fdc3f48,
            mid_fileExists_5fdc3f44,
            mid_fileLength_5fdc3f54,
            mid_listAll_2e6d5245,
            mid_listCachedFiles_2e6d5245,
            mid_openInput_3e1b5375,
            mid_ramBytesUsed_54c6a17a,
            mid_sync_9bfb370d,
            mid_toString_14c7b5c5,
            mid_doCacheWrite_501c6f10,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NRTCachingDirectory(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          NRTCachingDirectory(const NRTCachingDirectory& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          NRTCachingDirectory(const ::org::apache::lucene::store::Directory &, jdouble, jdouble);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          JArray< ::java::lang::String > listAll() const;
          JArray< ::java::lang::String > listCachedFiles() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          jlong ramBytesUsed() const;
          void sync(const ::java::util::Collection &) const;
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
      namespace store {
        extern PyTypeObject PY_TYPE(NRTCachingDirectory);

        class t_NRTCachingDirectory {
        public:
          PyObject_HEAD
          NRTCachingDirectory object;
          static PyObject *wrap_Object(const NRTCachingDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
