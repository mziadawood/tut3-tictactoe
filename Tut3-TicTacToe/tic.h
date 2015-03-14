#pragma once
#include <string>

using namespace std;

class tic
{
private:

	char arr[3][3];

public:
	tic();
	~tic();
	void restart();
	bool move(int,int,int);//x,y,player
	void print();
	int isWon();
	
};

