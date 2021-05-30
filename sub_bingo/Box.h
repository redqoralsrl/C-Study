#pragma once
#include <iostream>

using namespace std;

class Box
{
private:
	int box[25];
	int one, two, three;
	int row = 0;
	int cal = 0;
	int ex = 0;
public:
	void Init();
	void Update(int user);
	void Render();
	void Check();
};

