#include<iostream>
#include<cstring> // strlen() �Լ��� ����ϱ� ���ؼ�

using namespace std;

int main() {
	// auto : �ڵ����� ���������� �����ϰ� �ȴ�.

	auto u = 100; // int
	auto p = 1.5; // float
	auto o = 1.3e12L; // long long
	
	// �迭 (array) : ���� ���������� ����
	// typeName arrayName[arraySize];
	short month[12]; // ����

	char name[10];
	char name1[10];
	char name2[10];
	cin >> name;
	cin.get(name1, 15); // ���⵵ ���尡���ϴ� �ڿ��� ���� �迭 ũ��
	cin.getline(name2, 15); // ���⵵ ���尡���ϴ� �ڿ��� ���� �迭 ũ��
	string str = "�䵥���Ͱ� ����ȴ�";

	return 0;
}