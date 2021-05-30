#include<iostream>

using namespace std;

/*
1.상속관계에서 놓여 잇는 두 클래스에서 자식 클래스의 포인터 및 참조형 데이터를
부모 클래스의 포인터 및 참조형 데이터로 형변환 할경우 다이나믹....

2.반대인 경우 스태틱....

하나 이상의 가상함수를 지닌 부모클래스 경우!!!
*/

class Parent
{
public:
	virtual void Print() {
		cout << "부모클래스!!!" << endl;
	}
};

class Child :public Parent
{
public:
	void Print() {
		cout << "상속받은 자식클래스!!!" << endl;
	}
};
int main() {
	/*Parent* pParent = new Child;
	Child* pChild = dynamic_cast<Child*>(pParent);
	pChild->Print();*/

	// pParent가 가르키는 대상을 pChild가 가리킬수 없는 상황
	Parent* pParent = new Parent;
	Child* pChild = dynamic_cast<Child*>(pParent);
	if (pChild == NULL) {
		cout << "형변환 실패!!" << endl;
	}
	else pChild->Print();

	return 0;
}