# Back 2 C++

## Introducción
---
- Este repositorio es una recopilación sencilla de ciertos conceptos interesantes para repasar C++ Moderno. 
- Estos conceptos se trabajan mediante ficheros fuente .cpp, comentados y en los cuales se presentan ejemplos de uso básicos.
- Se toma como referencia el estándar C++17

## Índice
---
- [STL Containers](stl_containers/)
  - [std::array](stl_containers/std_array.cpp)
  - [std::vector](stl_containers/std_vector.cpp)
  - [std::deque]()
  - [std::queue]()
  - [std::stack]()
  - [std:list]()
  - [std::map](stl/std_map.cpp)
  - [std::set]()


## Cómo ejecutar los ejemplos
---
```bash
# Compilación
g++ -o <nombre_del_ejecutable> <nombre_del_ejemplo>.cpp -std=c++17

# Ejecución
./<nombre_del_ejemplo>

# Ejemplo:
g++ -o std_array std_array.cpp -std=c++17
./std_array
```