#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Maze {
	vector<vector<char>> maze;
public:
	Maze();

	friend ostream& operator << (ostream & os, const Maze & maze);
};

Maze::Maze(){
	int size = 11;
	for (int i = 0; i < size; i++)
	{
		maze.push_back(vector<char>());
		for (int k = 0; k < size; k++)
		{
			maze[i].push_back(' ');
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size; k++)
		{
			switch (i)
			{
			case 0:
				if (k == 3)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			case 1:
				if (k == 1 || k==3 || k == 4 || k == 5 || k == 6 || k == 7 || k == 8 || k == 9)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			case 2:
				if (k == 1 || k == 3 || k == 5  || k == 7 || k == 9)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			case 3:
				if (k == 1 || k == 3 || k == 5 || k == 7 || k == 9)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			case 4:
				if (k == 1 || k == 2 || k == 3 || k == 5 || k == 7 || k==8 || k==9)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			case 5:
				if (k == 1 || k == 3 || k == 4 || k == 5 || k == 7)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			case 6:
				if (k == 1 || k == 5 || k == 7 || k == 8 || k == 9)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			case 7:
				if (k == 1 || k == 2 || k == 3 || k == 5 || k == 9)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			case 8:
				if (k == 1 || k == 3 || k == 6 || k == 7 || k==8 || k == 9)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
				
			case 9:
				if (k == 1 || k == 2 || k == 3 || k == 5 || k == 6)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			case 10:
				if (k == 6)
					maze[i][k] = '*';
				else
					maze[i][k] = '0';
				break;
			}
		}

	}

}
ostream& operator << (ostream& os, const Maze& picklemaze)
{
	int size = 11;
	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size; k++)
		{
			os << picklemaze.maze[i][k];
		}
		os << endl;

	}
	return os;
}