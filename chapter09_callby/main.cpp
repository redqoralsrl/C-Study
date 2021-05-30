#include<iostream>
#include<string>

using namespace std;

// �Լ��� ȣ�� �ɶ� �Ű������� ���ڸ� � ������� �ִ���?
// call by value : ���� ���� ����
// call by reference : ������ ���� ����
// call by address : �ּҿ� ���� ����

// call by value
// ���޵� �Ű����� ���� �Լ� ���� �Ű������� �����ϴ� ���
// ���޵� ������ �ƹ��� ������ ����
void value(int n);
// call by reference
// �μ��� ������ ���� �����ϴ� ���� �ƴ� �ּҰ��� �����ϴ� ���̴�
// �μ��� ���޵� ������ ���� �Լ������� ������ �� �ְ� �ȴ�
void reference(int& n);
// call by address
void address(int* n);

int main() {
	int num = 10;
	value(num);
	cout << "num �� " << num << " num �ּҰ� " << &num << endl;
	reference(num);
	cout << "num �� " << num << " num �ּҰ� " << &num << endl;
	address(&num);
	cout << "num �� " << num << " num �ּҰ� " << &num << endl;

	return 0;
}

void value(int n)
{
	n += 10;
	cout << "n�� �� " << n << " n�� �ּҰ� " << &n << endl;
}

void reference(int& n)
{
	n = 100;
	cout << "n�� �� " << n << " n�� �ּҰ� " << &n << endl;
}

void address(int* n)
{
	*n = 200;
	cout << "n�� �� " << *n << " n�� �ּҰ� " << &n << endl;
}
