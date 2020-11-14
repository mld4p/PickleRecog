using namespace std;
#include"maze.h"

#ifndef PERSON_H
#define PERSON_H

class Person
{
  private:
    int health;
    int x_coordinate;
    int y_coordinate;

  public:
    Person() : x_coordinate(0), y_coordinate(0), health(3){};
    char getMove();
    int checkMove(const char direction, const Maze maze);
    bool question();
}

#endif
