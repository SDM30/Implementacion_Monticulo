#ifndef __MONTICULO__H__
#define __MONTICULO__H__
#include <algorithm>
#include <vector>
#include <list>

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
        void inordenEnLista(std::list<T>& resultado) const;

};

#include "Monticulo.hxx"

#endif
