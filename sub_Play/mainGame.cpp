#include "mainGame.h"
#include "mainGame.h"

mainGame::mainGame() :key(0)
{
	enemy = new Enemy(100);
	player = new Player(200);
}

mainGame::~mainGame()
{
	delete enemy;
	delete player;
}

void mainGame::Update()
{
	cout << "플레이어 HP : " << player->GetHp() << endl;
	cout << "고블린 HP : " << enemy->GetHp() << endl;

	while (true)
	{
		cout << "입력 : ";
		cin >> key;

		switch ((PLAYERSKILL)key)
		{
		case PLAYERSKILL::NONE:
			cout << "아무것도 하지 않음" << endl;
			break;
		case PLAYERSKILL::POSITION:
			cout << "물약 섭취!" << endl;
			player->SetHp(player->GetHp() + 100);
			cout << "플레이어 체력 : " << player->GetHp() << endl;
			break;
		case PLAYERSKILL::SKILL_1:
			cout << "플레이어 공격!!" << endl;
			enemy->SetHp(enemy->GetHp() - player->GetAtk());
			cout << "고블린 체력 : " << enemy->GetHp() << endl;
			break;
		}
	}
}
