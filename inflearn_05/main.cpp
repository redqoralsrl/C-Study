#include<iostream>

using namespace std;

int main() {

	// ���� ������� 
	int val = 3;
	
	cout << val << endl;
	cout << &val << endl; // 16���� ǥ��� ��µȴ�

	// C++ ��ü���� ���α׷�
	// ������ �ð��� �ƴ� ���� �ð��� ��� ������ ���� �� �ִ�
	// - �迭 ����
	// �緡�� ������ ���α׷��� : �迭�� ũ�Ⱑ �̸� ����
	// ��ü���� ���α׷��� : �迭�� ũ�⸦ ���� �ð� ����

	// ������ : ����� �ּҿ� �̸��� ���δ�
	// ��, �����ʹ� �������� �̸��� �ּҸ� ��Ÿ����
	// ������ ������, ���� ���� ������ *

	int *a; // C ��Ÿ��
	int* b; // C++ ��Ÿ��
	int* c, d; // d�� ������ ����, d�� int�� ����

	int one = 6;
	int* two;
	
	two = &one;

	cout << "one�� �� " << one << endl; // one�� �� 6
	cout << "*two�� �� " << *two << endl; // one�� �� 6

	cout << "one�� �ּ� " << &one << endl; // one�� �ּҰ�
	cout << "*two�� �ּ� " << two << endl; // one�� �ּҰ�
	cout << "*two�� �ּ� " << &two << endl; // two�� �ּҰ�

	*two = *two + 1;
	cout << "one�� �� " << one << endl; // one�� +1 �� ���� 7
	return 0;
}