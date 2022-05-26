#include <iostream>
#include <map>

int main (){

    ///////////////////////////////////////////////////////////////////////
    // std::map es un container de parejas clave-valor con claves únicas //
    ///////////////////////////////////////////////////////////////////////

    // Mapa sin inicializar
    std::map<int, std::string> map1;

    // Mapa inicializado
    std::map<int, std::string> map2 { {1, "uno"}, {2, "dos"}, {3,"tres"}, {4, "cuatro"} };
 
    // Insertar nuevo valor (2 formas)
    map1[23] = "blah";
    map1.insert({30, "bleh"});
    map1.insert_or_assign(26, "bloh");

    // Buscar elemento
    auto it1 = map2.find(2);
    auto it2 = map2.find(5);

    // Existe en el map. Nos devuelve iterador al elemento y extraemos valor
    if(it1 != map2.end()) {
        std::cout << "\n" <<it1->second << std::endl;
    }

    // No existe. Nos devuelve iterador al final (end)
    if(it2 == map2.end()) {
        std::cout << "\n" << "Key 5 not found!" << std::endl;
    }

    // Devuelve un iterador al primer elemento que no sea menor a la clave dada
    auto it_not_less_than = map1.lower_bound(22);
    std::cout << "\n" << it_not_less_than->first << std::endl;
    std::cout << it_not_less_than->second << std::endl;
	
	// Devuelve un iterador al primer elemento mayor a la clave dada
    auto it_not_greater_than = map1.upper_bound(25);
    std::cout << "\n" << it_not_greater_than->first << std::endl;
    std::cout << it_not_greater_than->second << std::endl;
}