#include<iostream>
#include<string>

using namespace std;

// 구조체 : 하나 이상의 변수를 묶어서 새로운 자료형을 정의
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

// Zerg&level 말고 Zerg level을 해도되지만 &이 속도가 빠르다
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
	cout << "마린 인터페이스" << endl;
	cout << "==============" << endl;

	marin.name = "마린";
	marin.hp = 100;
	marin.isDie = false;
	marin.atk = 5.5f;

	cout << "이름 : " << marin.name << endl;
	cout << "피통 : " << marin.hp << endl;
	cout << "공격력 : " << marin.atk << endl;
	cout << "죽음 : " << marin.isDie << endl;

	Zerg zergling = { 100, 20, 5 }; // 생성과 동시에 초기화 가능

	cout << "저글링 피통 : " << zergling.hp << endl;
	cout << "저글링 공격력 : " << zergling.atk << endl;
	cout << "저글링 속도 : " << zergling.speed << endl;
	cout << endl << endl;

	zergling = levelup(zergling);
	cout << "저글링 업그레이드 완료!!!" << endl;
	cout << "저글링 피통 : " << zergling.hp << endl;
	cout << "저글링 공격력 : " << zergling.atk << endl;
	cout << "저글링 속도 : " << zergling.speed << endl;

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
