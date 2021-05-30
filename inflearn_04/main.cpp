#include<iostream>

using namespace std;

int main() {
	// 공용체(union)
	// 서로 다른 데이터 형을 한번에 한가지만 보관할 수 있음
	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	test.longVal = 33;
	test.floatVal = 3.33; // intVal과 longVal는 이상한 값이 들어간다
	// 그래서 같은 데이터 형태를 넣어야 한다

	// 열거체(enum)
	// 기호 상수를 만드는 것에 대한 또다른 방법
	enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
	// 1. spectrum을 새로운 데이터형 이름으로 만든다
	// 2. red, orange, yello... 를 0에서 7까지 정수 값을 각각
	// 나타내는 기호 상수로 만든다
	
	spectrum a = orange;
	cout << a << endl; // 1이 나온다

	int b;
	b = blue; // 4
	b = blue + 3; // 7
	
	return 0;
}