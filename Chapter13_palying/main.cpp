#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main() {

	srand(time(NULL));

	char user[5] = "";
	int result = 0;
	int com = 0;

	while (true) {
		com = rand() % 3;

		cout << "�� �� ���� �Է��ϼ��� : ";
		cin >> user;

		if (user != "��" && user != "��" && user != "��") {
			cout << "�ٽ��Է���" << endl;
			break;
		}
		if (user == "��") result = 0;
		if (user == "��") result = 1;
		if (user == "��") result = 2;

		switch (result)
		{
		case 0:
			if (com == 0) cout << "����" << endl;
			if (com == 1) cout << "�̰��" << endl;
			if (com == 2) cout << "����" << endl;
			break;
		case 1:
			if (com == 0) cout << "����" << endl;
			if (com == 1) cout << "����" << endl;
			if (com == 2) cout << "�̰��" << endl;
			break;
		case 2:
			if (com == 0) cout << "�̰��" << endl;
			if (com == 1) cout << "����" << endl;
			if (com == 2) cout << "����" << endl;
			break;
		default:
			cout << "�ٽ� ����� �Է��ϼ���!" << endl;
			break;
		}
		cout << "��������" << user << "���ͳ���" << com << endl;
	}

	return 0;
}