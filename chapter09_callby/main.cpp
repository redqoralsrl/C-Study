#include<iostream>
#include<string>

using namespace std;

// 함수가 호출 될때 매개변수에 인자를 어떤 방식으로 넣느냐?
// call by value : 값에 의한 전달
// call by reference : 참조에 의한 전달
// call by address : 주소에 의한 전달

// call by value
// 전달된 매개변수 값을 함수 내의 매개변수에 복사하는 방식
// 전달된 변수에 아무런 영향이 없다
void value(int n);
// call by reference
// 인수로 변수의 값을 전달하는 것이 아닌 주소값을 전달하는 것이다
// 인수로 전달된 변수의 값을 함수에서도 변경할 수 있게 된다
void reference(int& n);
// call by address
void address(int* n);

int main() {
	int num = 10;
	value(num);
	cout << "num 값 " << num << " num 주소값 " << &num << endl;
	reference(num);
	cout << "num 값 " << num << " num 주소값 " << &num << endl;
	address(&num);
	cout << "num 값 " << num << " num 주소값 " << &num << endl;

	return 0;
}

void value(int n)
{
	n += 10;
	cout << "n의 값 " << n << " n의 주소값 " << &n << endl;
}

void reference(int& n)
{
	n = 100;
	cout << "n의 값 " << n << " n의 주소값 " << &n << endl;
}

void address(int* n)
{
	*n = 200;
	cout << "n의 값 " << *n << " n의 주소값 " << &n << endl;
}
