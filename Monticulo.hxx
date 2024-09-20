#include "Monticulo.h"

template<class T>
Monticulo<T>::Monticulo(){

}

template<class T>
bool Monticulo<T>::insertar(T& val){
    vec.push_back(val);
    std::push_heap(vec.begin(),vec.end());
    return true;
}

template<class T>
bool Monticulo<T>::eliminar(T& val) {
    bool eliminado = false;
    
    // Buscar el elemento
    typename std::vector<T>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++) {
        if (val == *it) {
            eliminado = true;
            std::swap(*it, vec.back());
            vec.pop_back();
            break;
        }
    }

    std::make_heap(vec.begin(), vec.end());
    
    return eliminado;
}

template<class T>
bool Monticulo<T>::buscar(T& val){
    typename std::vector<T>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++){
        if (val == *it){
            return true;
            break;
        }
    }
    return false;
}

template<class T>
int Monticulo<T>::tamano(){
    return vec.size();
}