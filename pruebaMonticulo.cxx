#include <iostream>
#include "Monticulo.h"

int main() {
    Monticulo<int> monticulo;

    // Insertar elementos en el montículo
    int e1 = 10, e2 = 20, e3 = 5, e4 = 15;
    monticulo.insertar(e1);
    monticulo.insertar(e2);
    monticulo.insertar(e3);
    monticulo.insertar(e4);

    std::cout << "Tamaño del montículo: " << monticulo.tamano() << std::endl;

    // Buscar un elemento
    int e_buscar = 20;
    if (monticulo.buscar(e_buscar)) {
        std::cout << "Elemento " << e_buscar << " encontrado en el montículo." << std::endl;
    } else {
        std::cout << "Elemento " << e_buscar << " no encontrado en el montículo." << std::endl;
    }

    // Buscar un elemento
    int e_buscarNoExistente = 21;
    if (monticulo.buscar(e_buscarNoExistente)) {
        std::cout << "Elemento " << e_buscarNoExistente << " encontrado en el montículo." << std::endl;
    } else {
        std::cout << "Elemento " << e_buscarNoExistente << " no encontrado en el montículo." << std::endl;
    }

    // Eliminar un elemento
    int e_eliminar = 15;
    if (monticulo.eliminar(e_eliminar)) {
        std::cout << "Elemento " << e_eliminar << " eliminado del montículo." << std::endl;
    } else {
        std::cout << "Elemento " << e_eliminar << " no encontrado en el montículo." << std::endl;
    }

    std::cout << "Tamaño del montículo después de eliminar: " << monticulo.tamano() << std::endl;

    return 0;
}
