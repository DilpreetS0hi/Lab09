//
// Created by user on 2020-11-20.
//
#include <iostream>
#include "room.hpp"

#ifndef LAB09_DOOR_HPP
#define LAB09_DOOR_HPP
using namespace std;
class door{
public:
    room r1, r2;
    door(room &ro1, room &ro2){
        r1 = ro1;
        r2 = ro2;
    }
    virtual void door_has(){};
};

class enchanted_faery_door: public door{
    room r1, r2;
    enchanted_faery_door(room &ro1, room &ro2) : door(ro1, ro2) {
        r1 = ro1;
        r2 = ro2;
    }
    void door_has() override{
        cout<<"This door has faery wing for handle on it\n";
    }
};

class  futuristic_dystopian_door: public door{
public:
    room r1, r2;
    futuristic_dystopian_door(room &ro1, room &ro2) : door(ro1, ro2) {
        r1 = ro1;
        r2 = ro2;
    }

    void door_has() override{
        cout<<"This door has a some pill for a handle on it\n";
    }
};
#endif //LAB09_DOOR_HPP
