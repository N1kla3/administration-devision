//
// Created by Kolya on 9/29/2019.
//

#include "District.h"

District::District(std::vector<Village> &vill, City *cap, std::string nameOb):capital(cap), villages(vill), name(nameOb){
}

unsigned int District::getPopulation(){
    unsigned int result = 0;
    for(auto & iter : villages){
        result += iter.getPopulation();
    }
    result += capital->getPopulation();
    return result;
}

unsigned int District::getAllAdminPoints(){
    return capital->getAdminPoint();
}