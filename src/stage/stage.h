#ifndef STAGE_H
#define STAGE_H

#include <iostream>
#include <vector>
#include <map>
#include <random>
#include "persons.h"
#include "catalog.h"

class Stage{
    private:
        std::map<std::string , int> delay_ ; // preguntar a estepa
        int hard_; // 1 - 5 con la dureza

    public:
        // --------------CONSTRUCTORES---------------------
        Stage(int hard){
            if(hard<1){hard_=1;}
            else if(hard>5){hard_=5;}
            else{hard_=hard;}
        };
        //--------------FUNCIONES---------------------
        std::map<std::string, int> Simulate(std::vector <Cyclist> v);
        std::map<std::string, int> GetDelays() const {return delay_;}
        int GetHard(){return hard_;}
        
};



#endif