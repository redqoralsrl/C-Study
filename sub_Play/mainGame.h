#pragma once
#include "Enemy.h"
#include "Player.h"
#include<iostream>
using namespace std;
class mainGame
{
private:

	Enemy* enemy;
	Player* player;

	int key;

public:
	mainGame();
	~mainGame();

	void Update();
};

