#include <iostream>

using namespace std;

void Print() {
	cout << "프린트 함수" << endl;
}

void Hello();

// 함수 오버로딩
// - 함수이름은 동일하지만 인자로 받는 값이 다르다
// - 매개변수 개수가 달라야한다
// - 매개변수 타입이 달라야한다
int sum(int a, int b);
int sum(int a, int b, int c);

int main() {
	Print();
	Hello();
	cout << sum(1, 2) << endl;
	cout << sum(5, 3, 2) << endl;
	return 0;
}

void Hello()
{
	cout << "Hello 함수" << endl;
}

int sum(int a, int b)
{
	return a+b;
}

int sum(int a, int b, int c)
{
	return a+b+c;
}
