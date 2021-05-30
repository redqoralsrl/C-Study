#include<iostream>
#pragma warning(disable:4996)
using namespace std;

// 디폴트 복사생성자는 멤버 대 멤버로 복사한다
// 이 방식이 얕은 복사
// 이 경우에는 멤버변수가 힙의 메모리 공간을 참조하는 경우 문제가 생긴다

// 복사 생성자의 호출되는 시점
// 1. 기존에 생성된 객체를 이용해서 새로운 객체를 초기화 하는 경우
// 2. call by value 방식의 함수 호출과정에서 객체를 인자로 전달하는 경우
// 3. 객체를 반환하되 참조형으로 반환하지 않는 경우

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myName, int myAge) {
		int len = strlen(myName) + 1;
		name = new char[len];
		strcpy(name, myName); // myName을 name에 복사하겠다
		age = myAge;
	}
	// 복사 생성자 정의(깊은복사)
	// 멤버 뿐만 아니라 포인터로 참조하는 대상까지 깊게 복사한다
	// 멤버 변수 age를 멤버대 멤버로 복사하고
	// 메모리 공간 할당후 문자열 복사, 할당된 메모리의 주소값을 멤버 name에 저장
	Person(const Person& copy) :age(copy.age) {
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	~Person() {
		delete[]name; // 배열 지우는거
		cout << "소멸자 호출!!" << endl;
	}
	void Print()const {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}


};

int main() {

	Person p("천하장사", 1);
	// 복사의 결과로 하나의 문자열을 동시에 참조하게 된다
	// 이로 인해 객체의 소멸과정에서 문제가 발생한다
	// 현재 상황에서 name을 동시에 참조하고 있기 때문에 이미 지워진
	// 문자열을 delete하기 때문이다
	Person p2 = p;
	p.Print();
	p2.Print();

	return 0;
}