#include<iostream>
#include<string>

using namespace std;

inline int sum1(int a, int b);
// inline

int main() {

	cout << sum1(1, 2) << endl; // �Լ� ���θ� ��°�� �����ؼ� ����Ѵ�

	return 0;
}

inline int sum1(int a, int b)
{
	return a+b;
}
