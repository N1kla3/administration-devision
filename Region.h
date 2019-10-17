//
// Created by Kolya on 9/29/2019.
//
#include "District.h"

#ifndef ADMINDEVIS_REGION_H
#define ADMINDEVIS_REGION_H


class Region {
    std::string name;
public:
    std::vector<District> &districts;
    City *capital;
    Region(std::vector<District>&, City*,  std::string);
    unsigned int getPopulation();
    unsigned int getAllAdminPoints();
};


#endif //ADMINDEVIS_REGION_H
