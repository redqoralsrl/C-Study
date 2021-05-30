#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#define SIZE 20
using namespace std;

int main() {

	char animal[SIZE];
	char* ps;

	cout << "동물이름 입력하시오 : ";
	cin >> animal;

	// 동적 구조체 : 실행할시에 메모리에 크기 할당
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "입력한 동물 이름을 복사하였다" << endl;
	cout << "입력한 동물 이름은 " << animal << "이고 주소는 " << (int*)animal << "입니다" << endl;
	cout << "복사된 동물 이름은 " << ps << "이고 주소는 " << (int*)ps << "입니다" << endl;

	return 0;
}