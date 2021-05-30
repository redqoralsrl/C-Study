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
	cout << "�÷��̾� HP : " << player->GetHp() << endl;
	cout << "��� HP : " << enemy->GetHp() << endl;

	while (true)
	{
		cout << "�Է� : ";
		cin >> key;

		switch ((PLAYERSKILL)key)
		{
		case PLAYERSKILL::NONE:
			cout << "�ƹ��͵� ���� ����" << endl;
			break;
		case PLAYERSKILL::POSITION:
			cout << "���� ����!" << endl;
			player->SetHp(player->GetHp() + 100);
			cout << "�÷��̾� ü�� : " << player->GetHp() << endl;
			break;
		case PLAYERSKILL::SKILL_1:
			cout << "�÷��̾� ����!!" << endl;
			enemy->SetHp(enemy->GetHp() - player->GetAtk());
			cout << "��� ü�� : " << enemy->GetHp() << endl;
			break;
		}
	}
}
