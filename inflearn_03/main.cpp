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
	// ����ü struct
	// �迭�� ���� ���������� �����̴� ���� ������Ÿ�Ե�θ� �̷���� �ִ� ������ �ִ�
	// ����ü�� ���������� �ٸ� ���������� ���Ǵ� �������� ����

	SoccerPlayer a; // ���� ����
	a.name = "������";
	a.position = "���͹�";
	a.height = 168.0;
	a.weight = 74.9;

	SoccerPlayer b = {
		"��Ű",
		"���ݼ�",
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