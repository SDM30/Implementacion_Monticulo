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
        bool insertar(T& val);
        bool eliminar(T& val);
        bool buscar(T& val);
        int tamano();

};

#include "Monticulo.hxx"

#endif
