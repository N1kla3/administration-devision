#include <iostream>
#include "Region.h"

using namespace std;

int main() {
    std::vector<Village> villages;
    {
        string vilName;
        for (int i = 0; i < 7; i++) {

            vilName += "a";
            auto *one = new Village(12 + i, vilName);
            villages.push_back(*one);
        }
    }
    auto * two = new City(7, 2, "Brest");
    auto *districtOne = new District(villages, two, "ofBrest");

    std::vector<Village> villagesTwo;
    {
        string vilName;
        for (int i = 0; i < 7; i++) {
            vilName += "b";
            auto *one = new Village(12 - i, vilName);
            villagesTwo.push_back(*one);
        }
    }
    auto * town = new City(10, 3, "Minsk");
    auto *districtTwo = new District(villagesTwo, town, "ofMinsk");

    std::vector<District> districts;
    districts.push_back(*districtOne);
    districts.push_back(*districtTwo);
    auto * capital = new City(10, 3, "Capital");

    auto *country = new Region(districts, capital, "ofCapital");

    cout << districtOne->getPopulation() << endl;
    cout << districtTwo->getPopulation() << endl;
    cout << country->getPopulation() << endl;
    districtOne->capital->setPopulation(1000);
    districtTwo->villages[2].setPopulation(30);
    cout << country->getPopulation() << endl;

    cout << districtOne->getAllAdminPoints() << endl;
    cout << districtTwo->getAllAdminPoints() << endl;
    cout << country->getAllAdminPoints() << endl;
    districtOne->capital->setAdminPoint(15);
    country->capital->setAdminPoint(7);
    cout << country->getAllAdminPoints() << endl;
    cout << districtOne->villages[3].getName();
    return 0;
}