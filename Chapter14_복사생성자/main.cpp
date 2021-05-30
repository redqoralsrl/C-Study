#include<iostream>

using namespace std;

class MyClass
{
private:
	int num1;
	int num2;

public:
	// ���� �����ڸ� �������� ������ ����� ����� ���縦 �����ϴ� ����Ʈ ���� �����ڰ�
	// �ڵ����� �����Ѵ�
	MyClass(int n1, int n2) :num1(n1), num2(n2) {};
	// ��������� ����, ���Ǹ� ���������� ���� �ּ��� ó�� �ڵ����� ���Եȴ�
	MyClass(const MyClass& copy) :num1(copy.num1), num2(copy.num2) {
		cout << "MyClass& copy" << endl;
	}

	void Print() {
		cout << num1 << endl;
		cout << num2 << endl;
	}


};


int main() {
	MyClass mc(10, 20);
	MyClass mc2 = mc;
	mc.Print();
	mc2.Print();

	return 0;
}