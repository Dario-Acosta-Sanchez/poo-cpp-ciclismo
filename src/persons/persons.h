#ifndef PERSONS_H
#define PERSONS_H

#include <iostream>
#include <string>

class Person {
protected:
    std::string name_;
    int birthYear_;
public:
    // Constructores
    inline Person() { name_ = "UNKNOWN"; birthYear_ = -1; }
    Person(std::string name, int birthYear) { name_ = name; birthYear_ = birthYear; }

    // Getters
    inline std::string GetName() { return name_; }
    inline int GetBirthYear() { return birthYear_; }

    // Setters
    bool SetName(std::string name);
    bool SetBirthYear(int birthYear);
};

class Cyclist : public Person {
private:
    std::string team_;
    std::string cyclistId_;
public:
    // Constructores
    inline Cyclist() { team_ = "UNKNOWN"; cyclistId_ = "UNKNOWN"; }
    Cyclist(std::string name, int birthYear, std::string team, std::string cyclistId) {
        name_ = name;
        birthYear_ = birthYear;
        team_ = team;
        cyclistId_ = cyclistId;
    }

    // Getters
    inline std::string GetTeam() { return team_; }
    inline std::string GetCyclistId() { return cyclistId_; }

    // Setters
    bool SetTeam(std::string team);
    bool SetCyclistId(std::string cyclistId);
};

class Director : public Person {
private:
    std::string team_;
    std::string uciLicenseId_;
    int directorSince_;
public:
    // Constructores
    Director() { team_ = "UNKNOWN"; uciLicenseId_ = "UNKNOWN"; directorSince_ = -1; }
    Director(std::string name, int birthYear, std::string team, std::string uciLicenseId, int directorSince) {
        name_ = name;
        birthYear_ = birthYear;
        team_ = team;
        uciLicenseId_ = uciLicenseId;
        directorSince_ = directorSince;
    }

    // Getters
    inline std::string GetTeam() { return team_; }
    inline std::string GetUciLicenseId() { return uciLicenseId_; }
    inline int GetDirectorSince() { return directorSince_; }

    // Setters
    bool SetTeam(std::string team);
    bool SetUciLicenseId(std::string uciLicenseId);
    bool SetDirectorSince(int directorSince);
};

// Funciones de lectura y escritura por consola
Person readPersonFromConsole();
void printPersonToConsole(Person person);
Cyclist readCyclistFromConsole();
void printCyclistToConsole(Cyclist cyclist);
Director readDirectorFromConsole();
void printDirectorToConsole(Director director);

#endif
