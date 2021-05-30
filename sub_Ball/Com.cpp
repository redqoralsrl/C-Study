#include "Com.h"

void Com::MakeRandom()
{
	srand(time(NULL));

	while (true) {
		int a = rand() % 9 + 1;
		int b = rand() % 9 + 1;
		int c = rand() % 9 + 1;
		if (a != b && b != c && a != c) {
			box[0] = a;
			box[1] = b;
			box[2] = c;
			break;
		}
	}

}

void Com::Show()
{
	for (int i = 0; i < 3; i++)
	{
		cout << box[i];
	}
	cout << endl;

	cout << "��Ʈ����ũ : " << strike << " �� : " << ball << " �ƿ� : " << out << endl;
}

void Com::End(int user[3])
{
	if (box[0] == user[0] && box[1] == user[1] && box[2] == user[2]) {
		cout << "�����Դϴ�!" << endl;
		exit(0);
	}
}

void Com::Check(int user[3])
{
	strike = 0;
	out = 0;
	ball = 0;
	// ��Ʈ����ũ ����
	for (int i = 0; i < 3; i++)
	{
		if (box[i] == user[i]) {
			strike += 1;
		}
	}

	// �� ����
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j) {
				if (box[i] == user[j]) {
					ball += 1;
				}
			}
		}
	}
	int count = 0;
	// �ƿ� ����
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (box[i] != user[j]) {
				count += 1;
			}
		}
		if (count == 3) {
			out += 1;
			count = 0;
		}
		else {
			count = 0;
		}
	}
}
