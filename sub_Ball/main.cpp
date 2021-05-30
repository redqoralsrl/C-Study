#include "Com.h"

// 숫자 야구 게임

int main() {

	Com c;
	c.MakeRandom();

	int user_input[3];
	int number;
	int end = 0;

	while (true) {
		cout << "=======숫자야구게임 숫자를 맞춰라!=======" << endl;
		for (int i = 0; i < 3; i++) {
			cout << "입력" << i << " : ";
			cin >> number;
			if (number == 0) {
				cout << "아웃으로 처리됩니다" << endl;
			}
			if (cin.fail()) {
				cout << "제대로입력해" << endl;
				number = 0;
				cin.clear();
				cin.ignore(999, '\n');
				//fseek(stdin, 0, SEEK_END); // fseek(입력한자료메모리위치, 해당값, 기준점)
			}
			user_input[i] = number;
		}

		if (user_input[0] == 0 && user_input[1] == 0 && user_input[2] == 0) {
			cout << " 잘과 " << endl;
			break;
		}
		
		c.Check(user_input);

		c.Show();
		
		c.End(user_input);

		if (end == 1) {
			break;
		}
	}

	return 0;
}