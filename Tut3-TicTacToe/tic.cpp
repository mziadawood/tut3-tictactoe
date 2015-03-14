#include "tic.h"
#include <string>
#include <iostream>

using namespace std;



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

	cout << "Game restarted"<<endl;
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

int tic::isWon()//addtohead
{
	//1-p1 won
	//2-p2 won
	//3-game still on
	//0-draw

	int result = 3; //innitialy set as draw

		for (int i = 1; i < 4; i++) //checks rows
		{
			int j = 1;
			if (arr[i][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i][j + 2] && arr[i][j + 2] != ' ')
			{

				if (arr[i] [j] == 'x')
			{
				result = 1;
			}
			else
			{
				result = 2;
			}

			}
		}


	for (int i = 1; i < 4; i++) //checks colums
	{
		int j = 1;
			if (arr[j][i] == arr[j + 1][i] && arr[j + 1][i] == arr[j + 2][i] && arr[j + 2][i] != ' ')
			{

			if (arr[j][i] == 'x')
			{
				result = 1;
			}
			else
			{
				result = 2;
			}


			}

	}

	if (arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3] && arr[3][3] != ' ' || arr[3][1] == arr[2][2] && arr[2][2] == arr[1][3] && arr[1][3] != ' ')
	{
	
		if (arr[2][2]=='x')
		{
			result = 1;
		}
		else
		{
			result = 2;
		}


	}

	return result; //returns 3 if nothing happen


}
