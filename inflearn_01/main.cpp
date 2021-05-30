#include<iostream>
#include<climits> // 라이브러리 F12누르면 설명나온다

using namespace std;

int main() {
	
	// 변수
	// 
	// 변수의 크기를 잘 확인하고 알맞은 자료형을 설정하는 것이
	// 메모리에 효율적이다
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	// 음의 값을 저장할 수 없다
	// 대신 음의 값만큼 양의 값이 늘어나서
	// 지원하는 범위가 늘어난다.
	unsigned int a;
	unsigned int b;
	unsigned long c;
	unsigned long long d;
	// int, short, long, long long, char, bool
	char s[] = { 'a','b','c','\0' }; // 메모리 낭비를 막기위해 끝이라는 \0을 넣어준다
	cout << s << endl;
	// bool : 0 (false) 혹은 1 (true)
	bool ss = 0;
	bool ss1 = 1;
	bool ss2 = 10; // 0 이외의 모든 값을 1로 저장한다
	cout << ss << " " << ss1 << " " << ss2 << endl;

	// 상수
	// 	   
	// 원의 넓이를 구하는 프로그램
	int r = 3;
	float sa = r * r * 3.14;
	cout << sa << endl;
	// 1. 바뀔 필요가 없는 수
	// 2. 바뀌어서는 안되는 수
	// 상수
	const float PIE = 3.1415926535; // #defind PIE = 3.1415926535;의 C스타일과 같다
	float ff = r * r * PIE;
	cout << ff << endl;

	// 데이터형 변환
	// 1. 특정 데이터형의 변수에 다른 데이터 형의 값을 대입했을 때
	// 2. 수식에 데이터형을 혼합하여 사용했을 때
	// 3. 함수에 매개변수를 전달할때
	int ab = 3.141592; // 소수점이 날라간다
	cout << ab << endl;
	// 강제적으로 데이터형 변환
	// typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;
	// C++ 제한적인 데이터형 변환
	// static_cast<typeName>
	cout << static_cast<int>(ch) << endl;

	return 0;
}