#include <iostream>
#ifndef LAB09_ROOM_HPP
#define LAB09_ROOM_HPP
using namespace std;
class room{
public:
    int roomNo = 0;
    virtual void room_has(){};
};

class enchanted_faery_room:public room{
    void room_has() override{
        cout<<"This room has Faeries in it\n";
    }
};
class  futuristic_dystopian:public room{
public:
    void room_has() override{
        cout<<"Dystopian Room"<<":This room has communist pigs on it\n";
    }
};
#endif //LAB09_ROOM_HPP
