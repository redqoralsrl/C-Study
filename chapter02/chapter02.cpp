#include<iostream>
#include<string>

using namespace std;

// �Լ� �ܺο� �ִ� �迭�� 0���� �ڵ� �ʱ�ȭ �ȴ�
int b[4];

int main() {
	int res = 0;
	for (int i = 0; i <= 100; i++) res += i;
	cout << res << endl;

	// ���ο� ���ǵ� �迭�� �ʱ�ȭ�� ���� ������ ������ ���� ����
	int a[4];
	cout << a << endl; // �����ּ� / ������ �迭 �̶� �ּҰ� ���´�
	cout << a[0] << endl;
	cout << b << endl;

	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << num[0] << endl;
	cout << "numũ�� : " << sizeof(num) << endl;
	cout << "intũ�� : " << sizeof(int) << endl;

	int numArrLen = sizeof(num) / sizeof(int);

	for (size_t i = 0; i < numArrLen; i++) cout << num[i] << endl;

	char name[5] = "abcd";
	cout << name << endl;

	return 0;
}