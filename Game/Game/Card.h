#pragma once
#include <iostream>

using namespace std;

class Card
{
private:
	int box[4][4];
	int show[8][8];
	int temp, ran1, ran2, ran3, ran4;
	int x = 0;
	int y = 1;
	int z = 1;
	int count = 0;
	int sample1 = 0;
	int sample2 = 0;
	int total = 0;
public:
	void Render();
	void Print();
	void Update(int);
	int Check();
};

