#include<iostream>
#include<string>

using namespace std;

int main() {
	// Pointer
	// �޸��� �ּҰ��� �����ϴ� �����̸� ������ ������� �θ���
	int n = 100; // ������ ����
	int* ptr = &n; // �������� ����
	// �ּҿ����� & : ������ �̸� �տ� ����Ͽ� �ش� ������ �ּ� ���� ��ȯ�Ѵ�
	// ���������� * : �������� �̸��̳� �ּ� �տ� ����Ͽ� �����Ϳ� ����Ǿ� �ִ� ���� ��ȯ�Ѵ�

	int a = 10;
	cout << &a << endl; // �޸� �ּҰ� ���´�

	// �������� ����� �ʱ�ȭ
	// �ʱ�ȭ ���� ���� ä�� ����ϸ� ����� �𸣴� �޸𸮿� �����ϴ� ���̶� ����뵵 ��ƴ�
	// Ÿ��* �������̸� = &�����̸�;
	// Ÿ��* �������̸� = &�ּҰ�;

	int num = 10;
	cout << "num�� ��" << num << endl; // 10
	cout << "num�� �ּҰ�" << &num << endl; // �޸� �ּҰ�

	int* p = &num;
	cout << "p�� ��" << p << endl; // num �޸� �ּҰ�
	cout << "p�� �ּҰ�" << &p << endl; // p �� �ּҰ�
	cout << "*p�� ��(num�� ��)" << *p << endl; // num�� �� 10

	// ������
	// ���� p�� �ּҰ��� ������ �ִ� ���¿���
	// �Ʒ��� ���� ���� ������ �� �ִ�
	*p = 777;
	cout << "��������(num��)" << num << endl; // num�� �� 777�� �ٲ��
	
	int** pp;
	pp = &p; // p�� �ּҰ��� ��´�
	cout << "pp�� ��" << pp << endl;
	cout << "*pp�� ����Ű�� ��" << *pp << endl;
	**pp = 1234;
	cout << "����� num�� ��" << num << endl;

	int arr[3] = { 1,2,3 };
	cout << &arr << endl;
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;

	return 0;
}