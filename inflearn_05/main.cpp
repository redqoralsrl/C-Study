#include<iostream>

using namespace std;

int main() {

	// 변수 선언과정 
	int val = 3;
	
	cout << val << endl;
	cout << &val << endl; // 16진수 표기로 출력된다

	// C++ 객체지향 프로그램
	// 컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다
	// - 배열 생성
	// 재래적 절차적 프로그래밍 : 배열의 크기가 미리 결정
	// 객체지향 프로그래밍 : 배열의 크기를 실행 시간 결정

	// 포인터 : 사용할 주소에 이름을 붙인다
	// 즉, 포인터는 포인터의 이름이 주소를 나타낸다
	// 간접값 연산자, 간접 참조 연산자 *

	int *a; // C 스타일
	int* b; // C++ 스타일
	int* c, d; // d는 포인터 변수, d는 int형 변수

	int one = 6;
	int* two;
	
	two = &one;

	cout << "one의 값 " << one << endl; // one의 값 6
	cout << "*two의 값 " << *two << endl; // one의 값 6

	cout << "one의 주소 " << &one << endl; // one의 주소값
	cout << "*two의 주소 " << two << endl; // one의 주소값
	cout << "*two의 주소 " << &two << endl; // two의 주소값

	*two = *two + 1;
	cout << "one의 값 " << one << endl; // one이 +1 된 값인 7
	return 0;
}