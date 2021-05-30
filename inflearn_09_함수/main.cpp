#include<iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int[], int);
int sumArr1(int*, int*);

int main() {

	// 1. 함수 정의 제공
	// 2. 함수 원형 제공
	// 3. 함수 호출

	// 리턴값이 있는 함수 타입
	// 리턴값이 없는 함수 타입

	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	int sum = sumArr(arr, SIZE);
	cout << "함수의 총 합은 " << sum << "입니다." << endl;

	int arr1[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	int sum1 = sumArr1(arr1, arr1+SIZE);
	cout << "함수의 총 합은 " << sum1 << "입니다." << endl;
	int sum2 = sumArr1(arr1, arr1 + 3);
	cout << "함수의 3번째 인덱스까지의 합은 " << sum2 << endl;

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
