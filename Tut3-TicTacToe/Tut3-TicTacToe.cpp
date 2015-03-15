// Tut3-TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tic.h"
#include <string>
#include <iostream>

using namespace std;



int main()
{
	tic tac;

	cout << "welcome to tictactoe " << endl;
	int p = 1;
	int gamestate = 3;
	for (int i = 0; i < 9; i++)
	{

		if (gamestate == 3)
		{
			bool k;
		int a, b;
		char z;
		cout << "please enter co-ordinates of your move player " << p << " eg 1,1 :" << endl;
		cin >> a >> z >> b;

		k = tac.move(a, b, p);
		if (k)
		{

			if (p == 1)
			{
				p++;

			}
			else if (p == 2)
			{
				p--;
			}

			tac.print();
			gamestate = tac.isWon();
		}

		//gamestate check from here

		if (gamestate == 1)
		{
			cout << "player one has achieved success,player two ,,,NOPE";

		}
		if (gamestate == 2)
		{
			cout << "player two has achieved success";

		}



	}


}
	if (gamestate == 3)
	{
		cout << "it has been a draw";

	}



	system("pause");
}

