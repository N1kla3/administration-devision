//
// Created by Kolya on 9/29/2019.
//

#include "Region.h"

Region::Region(std::vector<District> &distr, City* cap, std::string nameOb):capital(cap), districts(distr), name(nameOb){
}

unsigned int Region::getPopulation() {
    unsigned int result = 0;
    for(auto & iter : districts){
        result += iter.getPopulation();
    }
    result += capital->getPopulation();
    return result;
}

unsigned int Region::getAllAdminPoints() {
    unsigned int result = 0;
    for(auto & iter : districts){
        result += iter.getAllAdminPoints();
    }
    result += capital->getAdminPoint();
    return result;
}