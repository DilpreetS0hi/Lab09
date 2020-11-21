#ifndef LAB09_MAZE_HPP
#define LAB09_MAZE_HPP
#include <iostream>
#include <stack>
#include "wall.hpp"
#include "door.hpp"
#include "room.hpp"

using namespace std;
class maze {
    stack<room> ro;
    int roomNo;
    wall w1;

public:
    virtual void print();

    virtual void add_room(room& r){};

    virtual void add_door(door& d){};

    virtual void add_wall(wall& w){};

    maze(){};
};
#endif //LAB09_MAZE_HPP
