//
// Created by Kolya on 9/18/2019.
//
#include <string>

#ifndef ADMINDEVIS_ADMINONE_H
#define ADMINDEVIS_ADMINONE_H


class AdminOne {
protected:
    virtual unsigned int getPopulation() = 0;
    virtual std::string getName() = 0;
};


#endif //ADMINDEVIS_ADMINONE_H
