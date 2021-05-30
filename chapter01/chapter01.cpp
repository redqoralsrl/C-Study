// 선행처리문
// 외부에 선언된 함수나 상수 등을 사용하기 위해서 헤더파일에 적는다
#include<iostream> // input output 지정
#include<string> // 문자열 타입 지정

// int main() { // inteager : 정수형으로 반환
// return 0;
// }

//void main() { // 아무것도 없는 공허를 반환한다
//}

// 명령문(statement) 동작을 명시하고 컴퓨터에 알려주는 데 사용된다
// 안붙여주면 줄마다 붙여주는 번거로움이 있다
using namespace std;

int main() {
	// 입력과 출력
	std::cout << "출력할 데이터" << std::endl;
	cout << "출력할 데이터" << endl; // using namespace std;를 사용하면 생략가능
	cout << "나이를 입력하세요 : ";
	int age;
	cin >> age;
	cout << "나이는 " << age << "(세)입니다" << endl;

	cout << "===============================" << endl;

	// 변수
	// 변수란 데이터를 저장하기 위해 프로그램에 의해 할당받은 메모리 공간을 말한다
	// 정수형 변수와 실수형 변수로 구분할 수 있다.
	// 정수형 : int, short, long, long long
	// 문자형 : char
	// 논리형 : bool
	// 부동소수점 : float, double, long double

	cout << "int 사이즈 : " << sizeof(int) << "바이트" << endl;
	cout << "short 사이즈 : " << sizeof(short) << "바이트" << endl;
	cout << "long 사이즈 : " << sizeof(long) << "바이트" << endl;
	cout << "char 사이즈 : " << sizeof(char) << "바이트" << endl;
	cout << "bool 사이즈 : " << sizeof(bool) << "바이트" << endl;
	cout << "float 사이즈 : " << sizeof(float) << "바이트" << endl;
	cout << "double 사이즈 : " << sizeof(double) << "바이트" << endl;

	// 변수와 메모리 주소
	// 변수는 기본적으로 메모리의 주소를 기억하는 역할을 한다
	// 변수를 참조할때는 메모리의 주소를 참고하는 것이 아닌 해당 주소에
	// 저장된 데이터를 참조하게 된다. 따라서 변수는 데이터가 저장된 주소뿐만 아니라
	// 저장된 데이터 길이와 형태에 관한 정보도 다 같이 기억해야 한다.

	int num = 1;
	int num1 = 1.2123f; // 뒤에 소수점은 잘린다
	float fNum = 1.5f;
	char str = 'd';
	char stra[5] = "한글"; // 한글은 2바이트씩 영어는 1바이트씩 띄어쓰기는 1바이트를 차지한다
	bool isActive = false;
	string s = "english";
	cout << num << endl;
	cout << num1 << endl;
	cout << fNum << endl;
	cout << str << endl;
	cout << isActive << endl;

	cout << "===============================" << endl;

	// 비트연산
	// & : 2개의 비트가 모두 1일때 1을 반환한다
	// 0&0 : 0
	// 0&1 : 0
	// 1&0 : 0
	// 1&1 : 1
	//128 64 32 16 8 4 2 1
	// 0   0  0  0 0 0 0 0

	int bitNum = 15; // 15 => 0000 1111
	int bitNum1 = 20; // 20 => 0001 0100

	// 0000 0100 => 4
	int bitResult = bitNum & bitNum1;
	cout << bitResult << endl;

	// | : 2개의 비트 중에 하나라도 1이면 1반환
	// 0|0 : 0
	// 0|1 : 1
	// 1|0 : 1
	// 1|1 : 1

	int bitNumber = 15; // 0000 1111
	int bitNumber1 = 20; // 0001 0100

	// 0001 1111 => 31
	int bitResult1 = bitNumber | bitNumber1;
	cout << bitResult1 << endl;

	// XOR
	// ^ : 2개의 비트가 서로 다른 경우에만 1을 반환
	// 0^0 : 0
	// 0^1 : 1
	// 1^0 : 1
	// 1^1 : 0

	int bitNumbers = 15; // 0000 1111
	int bitNumbers1 = 20; // 0001 0100

	// 0001 1011 => 27
	int bitResult2 = bitNumbers ^ bitNumbers1;
	cout << bitResult2 << endl;

	// shift연산(비트이동)
	int sNum = 15; // 00001111
	int result = sNum << 1; // 00011110 한비트씩 밀어준다
	int result1 = sNum << 2; // 00011110
	int result2 = sNum >> 3; // 00000001
	cout << result << endl;
	cout << result1 << endl;
	cout << result2 << endl;
	// 비트의 열을 왼쪽으로 1칸씩 이동할때마다 정수의 값은 2배
	// 반대로 오른쪽으로 이동할때마다 정수의 값은 2로 나누어진다.
	// 상황에 따라 곱셈과 나눗셈은 비트이동으로 대체 할수 있다.

	return 0;
}
