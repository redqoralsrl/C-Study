#include<iostream>

using namespace std;

// enum ����ü
// ����ü�� ���� �� ���� ���Ӹ� �ƴ϶� Ÿ�Ա����� üũ
// ����ü�� ������� �����ǵǴ��� �ٽ� �������� �ʿ䰡 �����ϴ�
////			0		1		2		3
//enum Color { RED, ORANGE, BLACK, BLUE };
////				3		4		10		11
//enum Color2 { RED=3, ORANGE, BLACK=10, BLUE };

enum class Color3 {
	RED, ORANGE, BLACK, BLUE
};

int main() {

	Color3 c1;
	c1 = Color3::RED;
	//Color a;
	int input;
	while (true)
	{
		cout << "���������� : ";
		cin >> input;
		switch (Color3(input))
		{
		case Color3::RED:
			cout << "��" << endl;
			break;
		case Color3::ORANGE:
			cout << "��" << endl;
			break;
		case Color3::BLACK:
			cout << "��" << endl;
			break;
		case Color3::BLUE:
			cout << "��" << endl;
			break;
		default:
			cout << "��" << endl;
			break;
		}
	}
	
}