#include <iostream>
#include "persons.h"

int main() {
    Person p1;
    std::cout << "Objeto creado con éxito" << std::endl;

    p1 = readPersonFromConsole();

    Cyclist c1;
    std::cout << "Objeto creado con éxito" << std::endl;
    c1 = readCyclistFromConsole();

    Director d1 = readDirectorFromConsole();

    printPersonToConsole(p1);
    printCyclistToConsole(c1);
    printDirectorToConsole(d1);
}
