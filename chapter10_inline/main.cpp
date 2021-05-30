#include<iostream>
#include<string>

using namespace std;

inline int sum1(int a, int b);
// inline

int main() {

	cout << sum1(1, 2) << endl; // 함수 내부를 통째로 복사해서 사용한다

	return 0;
}

inline int sum1(int a, int b)
{
	return a+b;
}
