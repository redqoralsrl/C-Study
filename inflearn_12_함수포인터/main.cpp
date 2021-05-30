#include <iostream>

using namespace std;

int func(int);

int main() {
	// 함수를 지시하는 포인터
	// 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용한다
	// 1. 함수의 주소를 얻는다
	// 2. 함수를 지시하는 포인터를 선언한다
	// 3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다

	cout << func << endl; // 시작 주소값이 나온다
	
	int (*pf)(int);
	pf = func; // 함수의 주소를 넣는다
	cout << (*pf)(3) << endl;

	return 0;
}

int func(int n)
{
	return n + 1;
}
