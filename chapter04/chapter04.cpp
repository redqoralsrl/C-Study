#include <iostream>

using namespace std;

void Print() {
	cout << "����Ʈ �Լ�" << endl;
}

void Hello();

// �Լ� �����ε�
// - �Լ��̸��� ���������� ���ڷ� �޴� ���� �ٸ���
// - �Ű����� ������ �޶���Ѵ�
// - �Ű����� Ÿ���� �޶���Ѵ�
int sum(int a, int b);
int sum(int a, int b, int c);

int main() {
	Print();
	Hello();
	cout << sum(1, 2) << endl;
	cout << sum(5, 3, 2) << endl;
	return 0;
}

void Hello()
{
	cout << "Hello �Լ�" << endl;
}

int sum(int a, int b)
{
	return a+b;
}

int sum(int a, int b, int c)
{
	return a+b+c;
}
