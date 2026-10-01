#include "persons.h"
#include <iostream>
#include <string>

// -------------------- Person --------------------
bool Person::SetName(std::string name){
    if(name==""){
        return false;
    } else{
        name_ = name;
        return true;
    }
}    

bool Person::SetBirthYear(int birthYear){
    if(birthYear <= 0){
        return false;
    } else{
        birthYear_ = birthYear;
        return true;
    }
}

// -------------------- Cyclist --------------------
bool Cyclist::SetTeam(std::string team){
    if(team == ""){
        return false;
    } else{
        team_ = team;
        return true;
    }
}

bool Cyclist::SetCyclistId(std::string cyclistId){
    if(cyclistId == ""){
        return false;
    } else{
        cyclistId_ = cyclistId;
        return true;
    }
}

// -------------------- Director --------------------
bool Director::SetUciLicenseId(std::string uciLicenseId){
    if(uciLicenseId == ""){
        return false;
    } else{
        uciLicenseId_ = uciLicenseId;
        return true;
    }
}

bool Director::SetDirectorSince(int directorSince){
    if(directorSince <= 0){
        return false;
    } else{
        directorSince_ = directorSince;
        return true;
    }
}

bool Director::SetTeam(std::string team){
    if(team == ""){
        return false;
    } else{
        team_ = team;
        return true;
    }
}

// -------------------- Funciones de lectura --------------------
Person readPersonFromConsole(){
    std::string name;
    int birthYear;
    std::cout << "dime el nombre" << std::endl;
    std::getline(std::cin, name);
    std::cout << "dime el año de nacimiento" << std::endl;
    std::cin >> birthYear;
    std::cin.ignore();
    Person p1(name, birthYear);
    return p1;
}

void printPersonToConsole(Person p1){
    std::cout << "el nombre es: " << p1.GetName() << std::endl;
    std::cout << "el año es: " << p1.GetBirthYear() << std::endl;
}

Cyclist readCyclistFromConsole(){
    std::string name;
    std::string cyclistId;
    std::string team;
    int birthYear;

    std::cout << "dime el nombre" << std::endl;
    std::getline(std::cin, name);
    std::cout << "dime el año de nacimiento" << std::endl;
    std::cin >> birthYear;
    // aqui no va un cin.ignore ehhh!!!!!!!!!!!!!!!!!!!!!!!
    std::cout << "dime el id del cyclist " << std::endl;
    std::cin >> cyclistId;
    std::cin.ignore();
    std::cout << "dime el team" << std::endl;
    std::cin >> team;
    std::cin.ignore();
    Cyclist c1(name, birthYear, team, cyclistId);
    return c1;
}

void printCyclistToConsole(Cyclist c1){
    std::cout << "el nombre es: " << c1.GetName() << std::endl;
    std::cout << "el año es: " << c1.GetBirthYear() << std::endl;
    std::cout << "el id es: " << c1.GetCyclistId() << std::endl;
    std::cout << "el team es: " << c1.GetTeam() << std::endl;
}

Director readDirectorFromConsole(){
    std::string name;
    std::string uciLicenseId;
    std::string team;
    int birthYear;
    int directorSince;

    std::cout << "dime el nombre" << std::endl;
    std::cin >> name;
    std::cin.ignore();
    std::cout << "dime el año de nacimiento" << std::endl;
    std::cin >> birthYear;
    std::cin.ignore();
    std::cout << "dime el uci license id " << std::endl;
    std::cin >> uciLicenseId;
    std::cin.ignore();
    std::cout << "dime el team" << std::endl;
    std::cin >> team;
    std::cin.ignore();
    std::cout << "dime el director since" << std::endl;
    std::cin >> directorSince;
    std::cin.ignore();
    Director d1(name, birthYear, team, uciLicenseId, directorSince);
    return d1;
}

void printDirectorToConsole(Director d1){
    std::cout << "el nombre es: " << d1.GetName() << std::endl;
    std::cout << "el año es: " << d1.GetBirthYear() << std::endl;
    std::cout << "el id es: " << d1.GetUciLicenseId() << std::endl;
    std::cout << "el team es: " << d1.GetTeam() << std::endl;
    std::cout << "el director since es: " << d1.GetDirectorSince() << std::endl;
}
