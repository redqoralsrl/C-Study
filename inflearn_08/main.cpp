#include<iostream>

using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

int main() {

	// ���� ����ü ����
	// temp* ps = new temp;

	MyStruct* temp = new MyStruct;

	cout << "����� �̸��� ? : ";
	cin >> temp->name; // ����ü ��� ���� 1
	cout << "����� ���̴� ? : ";
	cin >> (*temp).age; // ����ü ��� ���� 2

	cout << "�ȳ��ϼ���!" << temp->name;
	cout << "�����" << temp->age << "�� �̱���";

	delete temp;
	return 0;
}