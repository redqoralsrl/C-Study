#include "Com.h"

// ���� �߱� ����

int main() {

	Com c;
	c.MakeRandom();

	int user_input[3];
	int number;
	int end = 0;

	while (true) {
		cout << "=======���ھ߱����� ���ڸ� �����!=======" << endl;
		for (int i = 0; i < 3; i++) {
			cout << "�Է�" << i << " : ";
			cin >> number;
			if (number == 0) {
				cout << "�ƿ����� ó���˴ϴ�" << endl;
			}
			if (cin.fail()) {
				cout << "������Է���" << endl;
				number = 0;
				cin.clear();
				cin.ignore(999, '\n');
				//fseek(stdin, 0, SEEK_END); // fseek(�Է����ڷ�޸���ġ, �ش簪, ������)
			}
			user_input[i] = number;
		}

		if (user_input[0] == 0 && user_input[1] == 0 && user_input[2] == 0) {
			cout << " �߰� " << endl;
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