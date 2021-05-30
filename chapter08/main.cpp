#include<iostream>
#include<string>

using namespace std;

int main() {
	// Pointer
	// 메모리의 주소값을 저장하는 변수이며 포인터 변수라고 부른다
	int n = 100; // 변수의 선언
	int* ptr = &n; // 포인터의 선언
	// 주소연산자 & : 변수의 이름 앞에 사용하여 해당 변수의 주소 값을 반환한다
	// 참조연산자 * : 포인터의 이름이나 주소 앞에 사용하여 포인터에 저장되어 있는 값을 반환한다

	int a = 10;
	cout << &a << endl; // 메모리 주소가 나온다

	// 포인터의 선언과 초기화
	// 초기화 하지 않은 채로 사용하면 어딘지 모르는 메모리에 저장하는 것이라 디버깅도 어렵다
	// 타입* 포인터이름 = &변수이름;
	// 타입* 포인터이름 = &주소값;

	int num = 10;
	cout << "num의 값" << num << endl; // 10
	cout << "num의 주소값" << &num << endl; // 메모리 주소값

	int* p = &num;
	cout << "p의 값" << p << endl; // num 메모리 주소값
	cout << "p의 주소값" << &p << endl; // p 의 주소값
	cout << "*p의 값(num의 값)" << *p << endl; // num의 값 10

	// 역참조
	// 현재 p는 주소값을 가지고 있는 상태에서
	// 아래와 같이 값을 변경할 수 있다
	*p = 777;
	cout << "역참조후(num값)" << num << endl; // num의 값 777로 바뀐다
	
	int** pp;
	pp = &p; // p의 주소값을 담는다
	cout << "pp의 값" << pp << endl;
	cout << "*pp가 가르키는 값" << *pp << endl;
	**pp = 1234;
	cout << "변경된 num의 값" << num << endl;

	int arr[3] = { 1,2,3 };
	cout << &arr << endl;
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;

	return 0;
}