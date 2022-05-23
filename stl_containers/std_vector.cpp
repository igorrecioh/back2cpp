#include <iostream>
#include <vector>

int main (){

    ////////////////////////////////////////////////////
    // std::vector es un container de tamaño variable //
    ////////////////////////////////////////////////////

    // Vector sin inicializar
    std::vector<std::string_view> v1;

    // Vector inicializado
    std::vector<int> v2 = {1, 2, 3, 4};
    std::vector<double> v3 = {1.2, 2.3, 3.4, 4.5};

    // Añado elementos a v1
    v1.push_back("Hola");
    v1.push_back("Mundo");

    // Elimino último elemento de v2
    v2.pop_back();

    std::cout << "\nIteramos v1... " << std::endl;
    for (const auto& s : v1) {
        std::cout << s << std::endl;
    }

    std::cout << "\nIteramos v2... " << std::endl;
    for (const auto n : v2) {
        std::cout << n << std::endl;
    }

    // Eliminamos todos los elementos del vector --> Tamaño 0
    v2.clear();

    std::cout << "\nTamaño de v2: " << v2.size() << std::endl;

    // Eliminamos elemento concreto o rango
    // Solo queda Mundo en el vector
    v1.erase(v1.begin());
    std::cout << "\nIteramos v1... " << std::endl;
    for (const auto& s : v1) {
        std::cout << s << std::endl;
    }

    v2 = {5, 6, 7, 8};
    v2.erase(v2.begin(), v2.begin() + 2);
    // Solo quedan el 7 y el 8 en el vector
    std::cout << "\nIteramos v2... " << std::endl;
    for (const auto n : v2) {
        std::cout << n << std::endl;
    }

    // Redimensionamos v3 a tamaño 2
    // Nos quedan los dos primeros valores
    v3.resize(2);
    std::cout << "\nIteramos v3... " << std::endl;
    for (const auto n : v3) {
        std::cout << n << std::endl;
    }

    // Redimensionamos v3 a tamaño 7 rellenando de 0s
    v3.resize(7, 0);
    std::cout << "\nIteramos v3... " << std::endl;
    for (const auto n : v3) {
        std::cout << n << std::endl;
    }
}