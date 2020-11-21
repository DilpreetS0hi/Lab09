//
// Created by user on 2020-11-20.
//

#ifndef LAB09_FUTURISTIC_DYSTOPIAN_MAZE_FACTORY_HPP
#define LAB09_FUTURISTIC_DYSTOPIAN_MAZE_FACTORY_HPP

#include "maze_factory.hpp"
#include "futuristic_dystopian_maze.hpp"

class  futuristic_dystopian_maze_factory: public maze_factory{
    maze make_maze() override{
        futuristic_dystopian_maze m;
        return m;
    }
    wall make_wall() override{
        futuristic_dystopian_wall w;
        return w;
    }
    room make_room() override{
        futuristic_dystopian r;
        return r;
    }
    door make_door(room &r1, room &r2) override{
        futuristic_dystopian_door d(r1, r2);
        return d;
    }
};
#endif //LAB09_FUTURISTIC_DYSTOPIAN_MAZE_FACTORY_HPP
