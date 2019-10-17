//
// Created by Kolya on 9/29/2019.
//
#include "City.h"
#include <vector>

#ifndef ADMINDEVIS_DISTRICT_H
#define ADMINDEVIS_DISTRICT_H

class District : public AdminOne{
    std::string name;
public:
    std::vector<Village> &villages;
    City *capital;
    District(std::vector<Village>&, City*, std::string  nameOb);
    std::string getName()override{return name;}
    unsigned int getPopulation()override;
    unsigned int getAllAdminPoints();
};


#endif //ADMINDEVIS_DISTRICT_H
