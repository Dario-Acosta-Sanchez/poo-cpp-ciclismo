# POO en C++ · Gestión de ciclistas

Práctica de **Programación Orientada a Objetos** (2.º de Ingeniería Informática, Universidad de Córdoba).

Modela un equipo ciclista con herencia y composición, carga los datos desde CSV y simula etapas de una carrera.

## Qué incluye

- **`persons`**: jerarquía `Person` → `Cyclist` / `Director`, con validación en los setters.
- **`catalog`**: `CyclistCatalog` y `DirectorCatalog`, que cargan los datos desde CSV y permiten consultas (equipo de un ciclista, ciclistas por equipo, el más joven…).
- **`stage`**: simulación de una etapa con dificultad y cálculo de retrasos por ciclista (`std::map`).
- **Tests unitarios** con GoogleTest: 25 tests en total, todos pasan.

## Tecnologías

![C++20](https://img.shields.io/badge/C++20-00599C?logo=cplusplus&logoColor=white&style=flat) ![CMake](https://img.shields.io/badge/CMake-064F8C?logo=cmake&logoColor=white&style=flat) ![GoogleTest](https://img.shields.io/badge/GoogleTest-4285F4?logo=google&logoColor=white&style=flat)

## Compilar y ejecutar los tests

```bash
cmake -S . -B build
cmake --build build
cd build && ctest
```

GoogleTest se descarga automáticamente con `FetchContent`.
