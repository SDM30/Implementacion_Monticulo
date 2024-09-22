#ifndef __MONTICULO__H__
#define __MONTICULO__H__
#include <algorithm>
#include <vector>

template<class T>
class Monticulo {
    protected:
      std::vector<T> vec;
    public:
        Monticulo();
        bool insertar(const T& val);
        bool eliminar(const T & val);
        bool buscar(const T& val) const;
        int tamano() const;

};

#include "Monticulo.hxx"

#endif
