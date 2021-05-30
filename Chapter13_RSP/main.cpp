#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main() {

	srand(time(NULL));

	int input;
	int com = 0;


	while (true)
	{
		com = rand() % 3;
		cout << "묵(0) 찌(1) 빠(2)를 입력하세요";
		cin >> input;

		if (cin.fail()) {
			cout << "종료" << endl;
			input = 5;
			cin.clear();
			//cin.ignore();
			fseek(stdin, 0, SEEK_END); // fseek(입력한자료메모리위치, 해당값, 기준점)
		}

		switch (input)
		{
		case 0: // 묵
			if (com == 0) cout << "무승부" << endl;
			if (com == 1) cout << "이겼다" << endl;
			if (com == 2) cout << "졌다" << endl;
			break;
		case 1: // 찌
			if (com == 0) cout << "졌다" << endl;
			if (com == 1) cout << "무승부" << endl;
			if (com == 2) cout << "이겼다" << endl;
			break;
		case 2: // 빠
			if (com == 0) cout << "이겼다" << endl;
			if (com == 1) cout << "졌다" << endl;
			if (com == 2) cout << "무승부" << endl;
			break;
		default:
			cout << "제대로 입력하세요" << endl;
			break;
		}
		cout << "컴터가 낸거 " << com << endl;
		cout << "내가 낸거" << input << endl;
	}
	return 0;
}