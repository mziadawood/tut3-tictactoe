#include "tic.h"
#include <string>
#include <iostream>

including namespace std;



tic::tic()
{
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			arr[i][j] = ' ';
		}
	}

};


tic::~tic()
{
};

bool tic:: move(int a,int b,int p)// a-row b-col p-player
{
	bool flag=0;

	if (arr[a][b] == ' ')
	{
		flag = 1;

		if (p==1)
		{
			arr[a][b] == 'x';
		}
		else
		{
			arr[a][b] == 'o';
		}
	}

	return flag;
}

void tic::restart()
{
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void tic:: print()
{
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			cout << arr[i][j] <<" ";
		}
		cout << endl;
	}

}

int tic::isWon()
{



}
