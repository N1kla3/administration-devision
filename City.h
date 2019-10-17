//
// Created by Kolya on 9/29/2019.
//
#include "Village.h"

#ifndef ADMINDEVIS_CITY_H
#define ADMINDEVIS_CITY_H

class City : public Village{
    unsigned int adminPoint;
public:
    City(unsigned int popul,  unsigned int point, std::string nameOb):Village(popul, nameOb), adminPoint(point){}
    unsigned int getAdminPoint();
    void setAdminPoint(unsigned int point);
};


#endif //ADMINDEVIS_CITY_H
