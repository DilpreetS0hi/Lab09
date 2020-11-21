//
// Created by user on 2020-11-20.
//

#ifndef LAB09_FUTURISTIC_DYSTOPIAN_MAZE_HPP
#define LAB09_FUTURISTIC_DYSTOPIAN_MAZE_HPP

#include "maze.hpp"

class futuristic_dystopian_maze: public maze{
    stack<room> ro;
    void add_room(room &r) override{
        ro.push(r);
        r.room_has();
    }
    void add_wall(wall &w) override{
        w.wall_has();
    }
    void add_door(door &d) override{
        d.door_has();
    }

public:
    futuristic_dystopian_maze() {
        cout<<"A Orwellian dystopian maze";
    }
};
#endif //LAB09_FUTURISTIC_DYSTOPIAN_MAZE_HPP
