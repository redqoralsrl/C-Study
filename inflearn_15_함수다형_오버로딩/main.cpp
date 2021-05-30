#include <iostream>

using namespace std;

int su(int, int);
float su(float, float);

int main() {
	// 함수의 오버로딩
	// 
	// 여러 개의 함수를 같은 이름으로 연결한다
	// 1. 함수의 리턴형만 다를 경우
	// 2. 함수를 사용할때 두 개 이상의 함수에 대응되는 경우
	cout << "두 정수를 입력하십시오. \n";
	int a, b;
	cin >> a >> b;
	cout << "두 정수의 합은 " << su(a, b) << "입니다.\n";
	cout << "두 실수를 입력하십시오. \n";
	float c, d;
	cin >> c >> d;
	cout << "두 실수의 합은 " << su(c, d) << "입니다.\n";

}

int su(int a, int b)
{
	return a + b;
}

float su(float a, float b)
{
	return a + b;
}
