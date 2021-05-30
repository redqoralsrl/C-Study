#pragma once
#include "Emeny.h"
#include "Player.h"
#include <iostream>

using namespace std;

class mianGame
{
private:
	Emeny* enemy;
	Player* player;

	int key;

public:
	mianGame();
	~mianGame();

	void Update();
};

