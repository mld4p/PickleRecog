//Name:
//Date: 11/13/2020
//Filename: helper.h
//Purpose: Contain the prototypes for the functions defined in helper.cpp

#include<string>
using namespace std;

#ifndef HELPER_H
#define HELPER_H

struct quiz
{
	string question;
	string choices[4];
	char answer;
};

struct TorF
{
	string question;
	char answer;
};

void initQuiz(quiz MCq[]);

void initTF(TorF q[]);

bool quizShow(const int num);

#endif
