#ifndef java_util_Map_H
#define java_util_Map_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Map$Entry;
    class Set;
    class Collection;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Map : public ::java::lang::Object {
    public:
      enum {
        mid_clear_54c6a166,
        mid_containsKey_290588e2,
        mid_containsValue_290588e2,
        mid_entrySet_03e99967,
        mid_equals_290588e2,
        mid_get_a932a95f,
        mid_getOrDefault_537d5bdf,
        mid_hashCode_54c6a179,
        mid_isEmpty_54c6a16a,
        mid_keySet_03e99967,
        mid_put_537d5bdf,
        mid_putAll_4c9e2b1c,
        mid_putIfAbsent_537d5bdf,
        mid_remove_a932a95f,
        mid_remove_466982fe,
        mid_replace_537d5bdf,
        mid_replace_1f43c0be,
        mid_size_54c6a179,
        mid_values_2d2d7de4,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Map(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Map(const Map& obj) : ::java::lang::Object(obj) {}

      void clear() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(Map);

    class t_Map {
    public:
      PyObject_HEAD
      Map object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Map *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Map&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Map&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
