//
// Created by user on 2020-11-20.
//

#ifndef LAB09_MAZE_FACTORY_HPP
#define LAB09_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

class maze_factory{

public:
    virtual maze make_maze();

    virtual wall make_wall();

    virtual door make_door(room& r1, room& r2);

    virtual room make_room();
};


;
#endif //LAB09_MAZE_FACTORY_HPP
