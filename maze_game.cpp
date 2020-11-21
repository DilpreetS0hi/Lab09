#include "maze_game.hpp"
maze maze_game::create_maze(maze_factory& mf) {
    maze m = mf.make_maze();
    room r1 = mf.make_room();
    room r2 = mf.make_room();
    wall w = mf.make_wall();
    door d(mf.make_door(r1, r2));
    /*m.add_room(r1);
    m.add_room(r2);
    m.add_door(d);
    m.add_wall(w);*/
    return m;
}