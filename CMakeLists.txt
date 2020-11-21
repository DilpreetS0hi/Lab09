cmake_minimum_required(VERSION 3.17)
project(Lab09)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab09 main.cpp maze_factory.hpp maze.hpp wall.hpp door.hpp room.hpp maze_game.cpp maze_game.hpp enchanted_feary_maze_factory.hpp futuristic_dystopian_maze_factory.hpp futuristic_dystopian_maze.hpp enchanted_faery_maze.hpp)