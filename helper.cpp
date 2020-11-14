//Name:
//Date: 11/13/2020
//Filename: helper.cpp
//Purpose: Hold the definitions for the functions defined in helper.h

#include<fstream>
#include<iostream>
#include<string>
#include"helper.h"

using namespace std;

void initQuiz(quiz MCq[])
{
        ifstream fin("questions.dat");

        if(fin.is_open())
        {
                for(int i=0;i<6;i++)
                {
                        getline(fin,MCq[i].question,'\n');
                        for(int x=0;x<4;x++)
                        {
                                getline(fin,MCq[i].choices[x],'\n');
                        }
                        MCq[i].answer=fin.get();
                        fin.ignore(1,'\n');
                }
        }
        fin.close();
        return;
}

void initTF(TorF q[])
{
        ifstream fin("questions.dat");

        if(fin.is_open())
        {
                for(int i=0;i<36;i++)
                        fin.ignore(80,'\n');

                for(int i=0;i<3;i++)
                {
                        getline(fin,q[i].question,'\n');
                        q[i].answer=fin.get();
                        fin.ignore(1,'\n');
                }
        }
        fin.close();
        return;
}



