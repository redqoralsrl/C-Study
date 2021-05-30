#include<iostream>

using namespace std;

// enum 열거체
// 열거체를 비교할 때 실제 값뿐만 아니라 타입까지도 체크
// 열거체의 상숫값이 재정의되더라도 다시 컴파일할 필요가 없습니다
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
		cout << "눌러보세요 : ";
		cin >> input;
		switch (Color3(input))
		{
		case Color3::RED:
			cout << "빨" << endl;
			break;
		case Color3::ORANGE:
			cout << "주" << endl;
			break;
		case Color3::BLACK:
			cout << "검" << endl;
			break;
		case Color3::BLUE:
			cout << "파" << endl;
			break;
		default:
			cout << "없" << endl;
			break;
		}
	}
	
}