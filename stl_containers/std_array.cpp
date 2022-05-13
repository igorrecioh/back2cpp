#include <iostream>
#include <array>

int main (){

    ///////////////////////////////////////////////
    // std::array es un container de tamaño fijo //
    ///////////////////////////////////////////////

    // Array sin inicializar
    std::array<int, 3> arr1;

    // Array vacío
    std::array<int, 0> arr2;

    // Verificamos si está vacío
    std::cout << std::boolalpha;
    std::cout << "arr Vacío?: " << arr1.empty() << std::endl;
    std::cout << "arrVacio Vacío?: " << arr2.empty() << std::endl;

    // Llenamos arr1 con el valor 12 en todo el array
    std::fill(arr1.begin(), arr1.end(), 12);

    // A partir de C++17 se pueden inferir el tipo y tamaño
    std::array arr3 = {4.5, 7.6};

    // Modificación mediante asignación directa
    arr3[0] = 3.2;

    // Primer elemento
    arr1.front() = 1;

    // Último elemento
    arr1.back() = 6;
    
    // Iteramos arr1
    std::cout << "Elementos de arr1: " << std::endl;
    for(const auto& i : arr1){
        std::cout << "\t" << i << std::endl;
    }

    // Iteramos arr3
    std::cout << "Elementos de arr3: " << std::endl;
    for(const auto& i : arr3){
        std::cout << "\t" << i << std::endl;
    }

    // Tamaño de arr3
    std::cout << "Tamaño de arr3: " << arr3.size() << std::endl;

    // Creamos arr_swap1 y arr_swap2
    std::array<std::string_view, 2> arr_swap1 = {"Hola", "mundo"};
    std::array<std::string_view, 2> arr_swap2 = {"Hello", "world"};

    // Antes de alternar
    std::cout << "arr_swap1:" << arr_swap1[0] << " - "<< arr_swap1[1] << std::endl;
    std::cout << "arr_swap2:" << arr_swap2[0] << " - "<< arr_swap2[1] << std::endl;

    // Alternamos los arrays
    arr_swap1.swap(arr_swap2);

    // Después de alternar
    std::cout << "arr_swap1:" << arr_swap1[0] << " - "<< arr_swap1[1] << std::endl;
    std::cout << "arr_swap2:" << arr_swap2[0] << " - "<< arr_swap2[1] << std::endl;
}