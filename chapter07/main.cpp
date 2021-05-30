#include<iostream>
#include<string>

using namespace std;

// ����ü : �ϳ� �̻��� ������ ��� ���ο� �ڷ����� ����
struct Monster
{
	string name;
	int hp;
	float atk;
	bool isDie;
};

struct Zerg
{
	int hp;
	int atk;
	int speed;
};

// Zerg&level ���� Zerg level�� �ص������� &�� �ӵ��� ������
Zerg levelup(Zerg& level)
{
	level.hp += 50;
	level.atk += 100;
	level.speed += 10;
	return level;
}

struct Point
{
	int x;
	int y;
};

float distance(float x1, float y1, float x2, float y2);

int main(){
	Monster marin;
	cout << "���� �������̽�" << endl;
	cout << "==============" << endl;

	marin.name = "����";
	marin.hp = 100;
	marin.isDie = false;
	marin.atk = 5.5f;

	cout << "�̸� : " << marin.name << endl;
	cout << "���� : " << marin.hp << endl;
	cout << "���ݷ� : " << marin.atk << endl;
	cout << "���� : " << marin.isDie << endl;

	Zerg zergling = { 100, 20, 5 }; // ������ ���ÿ� �ʱ�ȭ ����

	cout << "���۸� ���� : " << zergling.hp << endl;
	cout << "���۸� ���ݷ� : " << zergling.atk << endl;
	cout << "���۸� �ӵ� : " << zergling.speed << endl;
	cout << endl << endl;

	zergling = levelup(zergling);
	cout << "���۸� ���׷��̵� �Ϸ�!!!" << endl;
	cout << "���۸� ���� : " << zergling.hp << endl;
	cout << "���۸� ���ݷ� : " << zergling.atk << endl;
	cout << "���۸� �ӵ� : " << zergling.speed << endl;

	Point p1, p2;
	p1.x = 1;
	p1.y = 2;
	p2.x = 4;
	p2.y = 3;
	float dis = distance(p1.x, p1.y, p2.x, p2.y);
	cout << dis << endl;
	cout << endl << endl;

	return 0;
}

float distance(float x1, float y1, float x2, float y2)
{
	float distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return distance;
}
