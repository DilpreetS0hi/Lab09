#include <iostream>
#ifndef LAB09_WALL_HPP
#define LAB09_WALL_HPP
using namespace std;
class wall{
public:
    virtual void wall_has(){};
};

class enchanted_faery_wall: public wall{
    void wall_has() override{
        cout<<"This wall has faery wings on it\n";
    }
};

class  futuristic_dystopian_wall: public wall{
public:
    void wall_has() override{
        cout<<"This wall has surveillance camera on it\n";
        cout<<"This wall has surveillance camera on it\n";
        cout<<"This wall has surveillance camera on it\n";
        cout<<"This wall has surveillance camera on it\n";
    }
};
#endif //LAB09_WALL_HPP
