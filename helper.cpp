//Name:
//Date: 11/13/2020
//Filename: helper.cpp
//Purpose: Hold the definitions for the functions defined in helper.h

#include<fstream>
#include<iostream>
#include<string>
#include"helper.h"

using namespace std;

void initQuiz(quiz &q[6])
{
	ifstream fin("questions.dat");

	if(fin.is_open())
	{
		for(int i=0;i<6;i++)
		{
			q[i].question=getline(fin,"\n");
			for(int x=0;x<4;x++)
			{
				q[i].choice[x]=getline(fin,"\n");
			}
			q[i].answer=static_cast<char>(getline(fin,"\n"));
		}
	}
	fin.close();
	return;
}

void initTF(TorF &q[3])
{
	ifstream fin("questions.dat");

	if(fin.is_open())
	{
		for(int i=0;i<36;i++)
			fin.ignore(80,'\n');

		for(int i=0;i<3;i++)
		{
			q[i].question=getline(fin.'\n');
			q[i].answer=static_cast<char>(getline(fin,'\n'));
		}
	}
	fin.close();
	return;
}


