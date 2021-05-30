#include<iostream>

using namespace std;

struct SoccerPlayer
{
	string name;
	string position;
	float height;
	float weight;
};

int main() {
	// 구조체 struct
	// 배열은 같은 데이터형의 집합이다 같은 데이터타입들로만 이루어져 있는 단점이 있다
	// 구조체는 집합이지만 다른 데이터형이 허용되는 데이터의 집합

	SoccerPlayer a; // 변수 선언
	a.name = "영웅이";
	a.position = "센터백";
	a.height = 168.0;
	a.weight = 74.9;

	SoccerPlayer b = {
		"밍키",
		"공격수",
		199,
		70
	};

	SoccerPlayer c[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	cout << a.name << endl;
	cout << a.position << endl;
	cout << a.height << endl;
	cout << a.weight << endl;
	cout << b.name << endl;
	cout << b.position << endl;
	cout << b.height << endl;
	cout << b.weight << endl;
	cout << c[1].height << endl;


	return 0;
}