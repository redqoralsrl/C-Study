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
		cout << "��(0) ��(1) ��(2)�� �Է��ϼ���";
		cin >> input;

		if (cin.fail()) {
			cout << "����" << endl;
			input = 5;
			cin.clear();
			//cin.ignore();
			fseek(stdin, 0, SEEK_END); // fseek(�Է����ڷ�޸���ġ, �ش簪, ������)
		}

		switch (input)
		{
		case 0: // ��
			if (com == 0) cout << "���º�" << endl;
			if (com == 1) cout << "�̰��" << endl;
			if (com == 2) cout << "����" << endl;
			break;
		case 1: // ��
			if (com == 0) cout << "����" << endl;
			if (com == 1) cout << "���º�" << endl;
			if (com == 2) cout << "�̰��" << endl;
			break;
		case 2: // ��
			if (com == 0) cout << "�̰��" << endl;
			if (com == 1) cout << "����" << endl;
			if (com == 2) cout << "���º�" << endl;
			break;
		default:
			cout << "����� �Է��ϼ���" << endl;
			break;
		}
		cout << "���Ͱ� ���� " << com << endl;
		cout << "���� ����" << input << endl;
	}
	return 0;
}