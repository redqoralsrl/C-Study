#include<iostream>

using namespace std;

// 함수 오버라이딩
// 상속관계에서 부모클래스가 가지고 있는 함수도
// 자식클래스 상속되어 하위 클래스에서도 사용가능
// 멤버함수 변경이 필요하면 멤버함수를 재정의를 하면된다.

class Animal
{
public:
	void Speak() {
		cout << "Animal이 짖고 있다." << endl;
	}
};
class Dog : public Animal
{
public:
	void Speak() {
		Animal::Speak();
		cout << "개가 멍멍!!" << endl;
	}
};

/*
가상함수 : C++ 다형성을 이라는 특성을 지원하기 위해 virtual 키워드가 제공된다
재정의가 되지 않았다면 부모 클래스의 함수가 실행된다 <=> 정의가 되어있다면
자식클래스의 함수가 실행된다
재정의할 가능성이 있는 멤버함수는 가상함수로 선언하는게 좋다.

모든 함수는 기본적으로 정적바인딩을 한다
일반 함수도 재정의 할 수 있지만 컴파일 할때
호출될 함수가 결정되기 때문에 동적바인딩 ㄴㄴ

정적바인딩(static-binding)
: 컴파일 하는 동안 호출될 함수가 결정
동적바인딩(dynamic-binding)
: 실행하는 동안 호출될 함수가 결정
포인터가 가르키는 객체가 무엇이냐에 따라 결정
*/
class Eat
{
public:
	virtual void Taste() {
		cout << "맛을보자!" << endl;
	}
};
class KoreaFood : public Eat
{
public:
	void Taste()override { // 재선언
		cout << "한식이네!" << endl;
	}
};
class AmreicaFood : public Eat
{
public:
	// 상속을 받는다
};

int main() {
	Dog d;
	d.Speak();

	// 업캐스팅을 하면 자식클래스 중에서 부모클래스로부터
	// 상속받은 부분만 포인터를 통해 사용가능하다
	// dog 객체 중에 Animal에 해당되는 부분은 포인터 변수를 통해 사용
	Eat* a = new KoreaFood();
	a->Taste();
	Eat* b = new AmreicaFood();
	b->Taste();
	return 0;
}