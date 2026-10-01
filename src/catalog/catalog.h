#ifndef CATALOG_H
#define CATALOG_H

#include <iostream>
#include <vector>
#include "persons.h"

class CyclistCatalog {
private:
    std::vector<Cyclist> Ciclistas_;

public:
    inline int Size() {
        return Ciclistas_.size();
    }

    bool Load(const std::string& path);

     std::vector<Cyclist>& Data() {
        return Ciclistas_;
    }

    std::string GetTeam(std::string id);
    std::vector<Cyclist> GetByTeam(std::string Team);
    std::vector<Cyclist> GetYoungest();
};

class DirectorCatalog {
private:
    std::vector<Director> Directores_;

public:
    inline int Size() {
        return Directores_.size();
    }

    bool Load(const std::string& path);

     std::vector<Director>& Data()  {
        return Directores_;
    }
};

#endif
