#include <iostream>

using namespace std;

int func(int);

int main() {
	// �Լ��� �����ϴ� ������
	// ��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ��� �����ϰ� ����Ѵ�
	// 1. �Լ��� �ּҸ� ��´�
	// 2. �Լ��� �����ϴ� �����͸� �����Ѵ�
	// 3. �Լ��� �����ϴ� �����͸� ����Ͽ� �� �Լ��� ȣ���Ѵ�

	cout << func << endl; // ���� �ּҰ��� ���´�
	
	int (*pf)(int);
	pf = func; // �Լ��� �ּҸ� �ִ´�
	cout << (*pf)(3) << endl;

	return 0;
}

int func(int n)
{
	return n + 1;
}
