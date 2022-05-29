#include <iostream>
#include <list>

int main (){

    ////////////////////////////////////////////////////////////////////////////////////////////
    // std::list es un container que permite añadir y borrar elementos en un tiempo constante //
    ////////////////////////////////////////////////////////////////////////////////////////////

    // Lista sin inicializar
    std::list<int> list1;

    // Lista inicializada
    std::list<int> list2 = { 9, 8, 7, 6, 5 };

    // Añadir al final un elemento
    list1.push_back(3);
    list1.push_back(2);

    // Añadir al inicio un elemento
    list1.push_front(4);

    // Combinar las dos listas
    list2.merge(list1);

    std::cout << "\nTras el merge de listas:" << std::endl;
    for(auto elem : list2) {
        std::cout << elem << std::endl;
    }

    // Ordena los elementos de la lista
    list2.sort();

    // Invierte el orden de los elementos
    list2.reverse();

    std::cout << "\nTras hacer sort y reverse:" << std::endl;
    for(auto elem : list2) {
        std::cout << elem << std::endl;
    }
     
}