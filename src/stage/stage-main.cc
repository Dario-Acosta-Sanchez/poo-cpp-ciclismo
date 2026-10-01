#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <random>
#include "persons.h"
#include "catalog.h"
#include "stage.h"
int main(){
    //creamos un vetor de ciclistas;
    CyclistCatalog ciclistasc;
   
    ciclistasc.Load("../data/cyclist.csv");
    std::vector <Cyclist> vc = ciclistasc.Data();

    // pasamos al programa
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distb(0, 5);
    int r= distb(gen);
    std::cout<<"el numeor aleatorio es "<<r<<std::endl;
    Stage etapa(r);
    std::map <std::string, int> delay= etapa.Simulate(vc);
    std::cout<< "mostramos"<<std::endl;
    for (auto i : vc)
    {
        
        std::cout<<"nombre; " <<i.GetName()<<",id; "<<i.GetCyclistId()<<"delay; "<<delay[i.GetCyclistId()]<<std::endl;
    }
    
}