//Name:
//Date: 11/14/2020
//Filname: main.cpp
//Purpose: For now, test the initialization

#include<iostream>
#include<string>
#include"helper.h"
#include"Maze.h"
using namespace std;


int main()
{
	TorF tralse[3];
	quiz millionaire[6];


	initTF(tralse);
	initQuiz(millionaire);

	cout<<tralse<<endl;
	cout<<millionaire<<endl;

	Maze picklemaze;
	cout << picklemaze;
	
	return 0;
}
