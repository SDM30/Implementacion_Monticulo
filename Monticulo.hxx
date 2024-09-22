#include "Monticulo.h"

template<class T>
Monticulo<T>::Monticulo(){

}

template<class T>
bool Monticulo<T>::insertar(const T& val){
    vec.push_back(val);
    std::push_heap(vec.begin(), vec.end());
    return true;
}

template<class T>
bool Monticulo<T>::eliminar(const T& val) {
    auto it = std::find(vec.begin(), vec.end(), val);
    if (it != vec.end()) {
        std::swap(*it, vec.back());
        vec.pop_back();
        if (!vec.empty()) {
            std::make_heap(vec.begin(), vec.end()); // Solo rehacer el heap si no está vacío
        }
        return true;
    }
    return false;
}

template<class T>
bool Monticulo<T>::buscar(const T& val) const {
   return std::find(vec.begin(), vec.end(), val) != vec.end();
}

template<class T>
int Monticulo<T>::tamano() const {
    return vec.size();
}
