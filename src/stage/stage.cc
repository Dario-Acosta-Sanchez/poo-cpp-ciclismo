#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <map>
#include <iterator>
#include <random>
#include "persons.h"
#include "catalog.h"
#include "stage.h"
std::map<std::string, int> Stage::Simulate(std::vector <Cyclist> v){
    int hard=Stage::GetHard();
    int max_delay= hard*400;
    int aux=0;
    std::string id;
    //codigo de random
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, max_delay);
    //din de randomm

    for (auto i : v)
    {
        int r=dist(gen);
        id=i.GetCyclistId();
        delay_[id]=r;

    }

    std::uniform_int_distribution<int> dista(0, v.size());
    int raux=dista(gen);
    for (auto i : v)
    {
        if(aux==raux){
            id=i.GetCyclistId();
            delay_[id]=0;
        }
        
        aux++;

    }
    
    return delay_;
}