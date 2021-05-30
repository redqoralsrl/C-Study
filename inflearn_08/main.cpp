#include<iostream>

using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

int main() {

	// 동적 구조체 생성
	// temp* ps = new temp;

	MyStruct* temp = new MyStruct;

	cout << "당신의 이름은 ? : ";
	cin >> temp->name; // 구조체 멤버 접근 1
	cout << "당신의 나이는 ? : ";
	cin >> (*temp).age; // 구조체 멤버 접근 2

	cout << "안녕하세요!" << temp->name;
	cout << "당신은" << temp->age << "살 이군요";

	delete temp;
	return 0;
}