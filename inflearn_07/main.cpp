#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#define SIZE 20
using namespace std;

int main() {

	char animal[SIZE];
	char* ps;

	cout << "�����̸� �Է��Ͻÿ� : ";
	cin >> animal;

	// ���� ����ü : �����ҽÿ� �޸𸮿� ũ�� �Ҵ�
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "�Է��� ���� �̸��� �����Ͽ���" << endl;
	cout << "�Է��� ���� �̸��� " << animal << "�̰� �ּҴ� " << (int*)animal << "�Դϴ�" << endl;
	cout << "����� ���� �̸��� " << ps << "�̰� �ּҴ� " << (int*)ps << "�Դϴ�" << endl;

	return 0;
}