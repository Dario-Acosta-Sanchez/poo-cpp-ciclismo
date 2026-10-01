#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "persons.h"
#include "catalog.h"

bool CyclistCatalog::Load(const std::string& path) {
    Cyclist c;
    std::string name, birth_s, id, team;
    int birthyear = 0;
    Ciclistas_.clear(); // Elimina todos los elementos si hubiera

    std::ifstream in(path);
    if (!in) {
        std::cerr << "-ERROR: No se pudo abrir " << path << "\n";
        return false;
    }

    std::string line;
    if (!std::getline(in, line)) return false; // saltar cabecera

    while (std::getline(in, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line); // Define un stream de lectura a partir de line
        if (!std::getline(iss, name, ',')) continue;
        if (!std::getline(iss, birth_s, ',')) continue;
        if (!std::getline(iss, id, ',')) continue;
        if (!std::getline(iss, team, ',')) continue;

        birthyear = std::stoi(birth_s);
        c.SetName(name);
        c.SetBirthYear(birthyear);
        c.SetCyclistId(id);
        c.SetTeam(team);
        Ciclistas_.push_back(c); // se hace una copia al final del vector
    }
    return !Ciclistas_.empty();
}

bool DirectorCatalog::Load(const std::string& path) {
    Director c;
    std::string name, birth_s, id, team, director_since;
    int directorSince, birthyear = 0;
    Directores_.clear(); // Elimina todos los elementos si hubiera

    std::ifstream in(path);
    if (!in) {
        std::cerr << "-ERROR: No se pudo abrir " << path << "\n";
        return false;
    }

    std::string line;
    if (!std::getline(in, line)) return false; // saltar cabecera

    while (std::getline(in, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line); // Define un stream de lectura a partir de line
        if (!std::getline(iss, name, ',')) continue;
        if (!std::getline(iss, birth_s, ',')) continue;
        if (!std::getline(iss, id, ',')) continue;
        if (!std::getline(iss, team, ',')) continue;
        if (!std::getline(iss, director_since, ',')) continue;

        birthyear = std::stoi(birth_s);
        directorSince = std::stoi(director_since);

        c.SetName(name);
        c.SetBirthYear(birthyear);
        c.SetUciLicenseId(id);
        c.SetTeam(team);
        c.SetDirectorSince(directorSince);

        Directores_.push_back(c); // se hace una copia al final del vector
    }
    return !Directores_.empty();
}

std::string CyclistCatalog::GetTeam(std::string id) {
    std::vector <Cyclist> c=Data();
    for (auto &i : c) {
        if (id == i.GetCyclistId()) {
            return i.GetTeam();
        }
    }
    std::cout << "error, no encontrado" << std::endl;
    return "";
   
}

std::vector<Cyclist> CyclistCatalog::GetByTeam(std::string Team) {
    std::vector<Cyclist> v1;
    std::vector <Cyclist> c=Data();
    for (auto &i : c) {
        if (i.GetTeam() == Team) {
            v1.push_back(i);
        }
    }
    return v1;
}

std::vector<Cyclist> CyclistCatalog::GetYoungest() {
    std::vector<Cyclist> v1;
    std::vector <Cyclist> c=Data();
    Cyclist aux = Ciclistas_[0]; // comentario: si Ciclistas_ está vacío, esto da error (out of range)

    
    for (auto &i : c) {
        if (aux.GetBirthYear() < i.GetBirthYear()) {
            aux = i;
        }
    }

    for (auto &a : c) {
        if (aux.GetBirthYear() == a.GetBirthYear()) {
            v1.push_back(a);
        }
    }
 return v1;
  
}

