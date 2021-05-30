#include<iostream>
#include<string>

using namespace std;

// 함수 외부에 있는 배열은 0으로 자동 초기화 된다
int b[4];

int main() {
	int res = 0;
	for (int i = 0; i <= 100; i++) res += i;
	cout << res << endl;

	// 내부에 정의된 배열은 초기화를 하지 않으면 쓰레기 값이 들어간다
	int a[4];
	cout << a << endl; // 시작주소 / 데이터 배열 이라서 주소가 나온다
	cout << a[0] << endl;
	cout << b << endl;

	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << num[0] << endl;
	cout << "num크기 : " << sizeof(num) << endl;
	cout << "int크기 : " << sizeof(int) << endl;

	int numArrLen = sizeof(num) / sizeof(int);

	for (size_t i = 0; i < numArrLen; i++) cout << num[i] << endl;

	char name[5] = "abcd";
	cout << name << endl;

	return 0;
}