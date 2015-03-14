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

	cout << "welcome to tictactoe "<<endl;
	int p = 1;
	for (int i = 0; i < 9; i++)
	{
		bool k;
		int a, b,gamestate ;
		char z;
cout << "please enter co-ordinates of your move player " << p <<" eg 1,1 :"<<endl;
cin >> a >> z >> b;

k = tac.move(a, b, p);
if (k == 1)
{

if (p==1)
{
	p = 2;
}
if (p == 2)
{
	p = 1;
}

tac.print();
gamestate = tac.isWon;
}

cout << gamestate;//still to do


	}



	return 0;
}

