#include<iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int[], int);
int sumArr1(int*, int*);

int main() {

	// 1. �Լ� ���� ����
	// 2. �Լ� ���� ����
	// 3. �Լ� ȣ��

	// ���ϰ��� �ִ� �Լ� Ÿ��
	// ���ϰ��� ���� �Լ� Ÿ��

	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	int sum = sumArr(arr, SIZE);
	cout << "�Լ��� �� ���� " << sum << "�Դϴ�." << endl;

	int arr1[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	int sum1 = sumArr1(arr1, arr1+SIZE);
	cout << "�Լ��� �� ���� " << sum1 << "�Դϴ�." << endl;
	int sum2 = sumArr1(arr1, arr1 + 3);
	cout << "�Լ��� 3��° �ε��������� ���� " << sum2 << endl;

	return 0;
}

int sumArr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}

int sumArr1(int* begin, int* end)
{
	int total = 0;
	int* pt;

	for (pt = begin; pt != end; pt++) {
		total += *pt;
	}
	return total;
}
