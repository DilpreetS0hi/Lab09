#include "maze_game.hpp"
#include "futuristic_dystopian_maze_factory.hpp"

using namespace std;
int main() {
    futuristic_dystopian_maze_factory mf;
    maze_game mg;
    maze m;
    m = mg.create_maze(mf);
//    m.print();
    return 0;
}
