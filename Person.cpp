using namespace std;
#include"person.h"
#include"maze.h"
#include"helper.h"


char getMove()
{
  char direction;
  do
  {
    cout << "Enter you next move (U/D/L/R)";
    cin >> direction;
  }while(direction != 'U' || direction != 'D' || direction != 'L' || direction != 'R')
  return direction;
}

int checkMove(const char direction, const Maze maze)
{
  int y_potential = y_coordinate;
  int x_potential = x_coordinate;
  char posStatus;


  switch(direction)
  {
    case 'U': y_potential++; break;
    case 'D': y_potential--; break;
    case 'L': x_potential--; break;
    case 'R': x_potential++; break;
  }


  posStatus = maze.position(x_potential,y_potential);


  if(posStatus = '?')
    return 1;    
  else if(posStatus = ' ')
    return 0;
  else
    return -1;
}

