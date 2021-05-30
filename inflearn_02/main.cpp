#include<iostream>
#include<cstring> // strlen() 함수를 사용하기 위해서

using namespace std;

int main() {
	// auto : 자동으로 데이터형을 결정하게 된다.

	auto u = 100; // int
	auto p = 1.5; // float
	auto o = 1.3e12L; // long long
	
	// 배열 (array) : 같은 데이터형의 집합
	// typeName arrayName[arraySize];
	short month[12]; // 선언

	char name[10];
	char name1[10];
	char name2[10];
	cin >> name;
	cin.get(name1, 15); // 띄어쓰기도 저장가능하다 뒤에는 담을 배열 크기
	cin.getline(name2, 15); // 띄어쓰기도 저장가능하다 뒤에는 담을 배열 크기
	string str = "긴데이터가 저장된다";

	return 0;
}