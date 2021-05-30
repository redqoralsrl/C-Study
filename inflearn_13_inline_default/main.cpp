#include <iostream>

using namespace std;

// 인라인
inline float square(float x) { return x * x; }

const int SIZE = 8;
// 디폴트
int sumArr(int*, int n = 1);

int main() {
	// 인라인 함수

	// 일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
	// 인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
	// 컴파일의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
	int a = 5;
	cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는?" << endl;
	float b = square(a);
	cout << b << endl;

	// 디폴트 매개변수
	// 디폴트는 오른쪽부터 먼저 줘야한다 왼쪽부터는 줄 수 가 없다
	int arr[SIZE] = { 1,2,4,8,16,32,64 };
	int sum = sumArr(arr, SIZE);
	cout << "합 : " << sum << "입니다" << endl;

	return 0;
}

int sumArr(int* arr, int n)
{
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}
