//
// Created by user on 2020-11-20.
//

#ifndef LAB09_ENCHANTED_FAERY_MAZE_HPP
#define LAB09_ENCHANTED_FAERY_MAZE_HPP

#include "maze.hpp"

class enchanted_faery_maze: public maze{
    void print() override{
        cout<<"A pretty, magical faery maze";
    }
    void add_room(room &r) override{
        r.room_has();
    }
    void add_wall(wall &w) override{
        w.wall_has();
    }
    void add_door(door &d) override{
        d.door_has();
    }
};
#endif //LAB09_ENCHANTED_FAERY_MAZE_HPP
