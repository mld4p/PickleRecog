//Name:
//Date: 11/14/2020
//Filname: main.cpp
//Purpose: For now, test the initialization

#include<iostream>
#include<string>
#include"helper.h"
#include"Maze.h"
#include"Person.h"

using namespace std;
bool question();

int main()
{
	TorF tralse[3];
	quiz millionaire[6];
        Person p1;

	initTF(tralse);
	initQuiz(millionaire);

	cout<<tralse<<endl;
	cout<<millionaire<<endl;

	Maze picklemaze;

        for(int i = 0; i < 20; i++)
        {
		cout << picklemaze;
                switch(p1.checkMove(const p1.getMove(),picklemaze))
                	case 1: question();
			case 0: move();
			case -1: falseMove();
	}
	return 0;
}


bool question()
{
  int randNum = rand()%9;
  char answer;
  if(randNum >2)
  else
  {
    randNum -= 3;
    cout << millionaire[randNum].question;
    for(int i = 0;i<4;i++)
    {
      cout << millionaire[randNum].choices[i];
    }
    cin >> answer;
    if(answer == millionaire[randNum].answer)
      return true;
  }
  return false;
}
