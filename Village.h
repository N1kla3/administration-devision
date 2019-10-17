//
// Created by Kolya on 9/18/2019.
//
#include "AdminOne.h"

#ifndef ADMINDEVIS_VILLAGE_H
#define ADMINDEVIS_VILLAGE_H


class Village : public AdminOne {
    unsigned int population;
    std::string name;
public:
    Village(unsigned int pop, std::string nam) : population(pop), name(nam){}
    std::string getName()override{return name;}
    unsigned int getPopulation()override;
    void setPopulation(unsigned int popul);
};


#endif //ADMINDEVIS_VILLAGE_H
