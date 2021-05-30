#pragma once
#include<iostream>
using namespace std;
class SlidePuzzle
{
private:

	int number[25];
	int save = 24;
	int dest, sour, temp;
public:

	void Init();
	void Update(int user);
	void Render();
};

