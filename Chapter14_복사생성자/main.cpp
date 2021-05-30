#include<iostream>

using namespace std;

class MyClass
{
private:
	int num1;
	int num2;

public:
	// 복사 생성자를 정의하지 않으면 멤버대 멤버의 복사를 진행하는 디폴트 복사 생성자가
	// 자동으로 삽입한다
	MyClass(int n1, int n2) :num1(n1), num2(n2) {};
	// 복사생성자 정의, 정의를 하지않으면 위의 주석글 처럼 자동으로 삽입된다
	MyClass(const MyClass& copy) :num1(copy.num1), num2(copy.num2) {
		cout << "MyClass& copy" << endl;
	}

	void Print() {
		cout << num1 << endl;
		cout << num2 << endl;
	}


};


int main() {
	MyClass mc(10, 20);
	MyClass mc2 = mc;
	mc.Print();
	mc2.Print();

	return 0;
}