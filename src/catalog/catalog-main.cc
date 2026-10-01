#include <iostream>
#include "catalog.h"
#include "persons.h"

int main() {
    CyclistCatalog ob1;
    DirectorCatalog ob2;

    ob1.Load("../data/cyclists.csv");
    ob2.Load("../data/directors.csv");

    std::vector<Cyclist> lista1 = ob1.Data();
    std::vector<Director> lista2 = ob2.Data();

    std::string saux;

    std::cout << "El número de ciclistas es " << ob1.Size() << std::endl;

    for (int i = 0; i < ob1.Size(); i++) {
        std::cout << "Elemento número " << i << std::endl;
        std::cout << "Name: " << lista1[i].GetName() << std::endl;
        std::cout << "Birth_year: " << lista1[i].GetBirthYear() << std::endl;
        std::cout << "Cyclist_id: " << lista1[i].GetCyclistId() << std::endl;
        std::cout << "Team: " << lista1[i].GetTeam() << std::endl;
    }

    for (Director &obaux : lista2) {
        std::cout << "Name: " << obaux.GetBirthYear();
        std::cout << " Birth_year: " << obaux.GetBirthYear();
        std::cout << " Director since: " << obaux.GetDirectorSince();
        std::cout << " Team: " << obaux.GetTeam() << std::endl;
    }

    std::cout << "Dime un team para buscar a los jugadores: " << std::endl;
    std::getline(std::cin, saux);

    std::vector<Cyclist> c1 = ob1.GetByTeam(saux);
    for (auto &i : c1) {
        printCyclistToConsole(i);
    }

    std::vector<Cyclist> j1 = ob1.GetYoungest();
    for (auto &a : j1) {
        printCyclistToConsole(a);
    }
}
