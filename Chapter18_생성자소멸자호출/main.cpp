#include <iostream>

using namespace std;

class Parent
{
public:
	Parent() { cout << "부모 생성자!" << endl; }
	virtual ~Parent() { cout << "부모 소멸자!" << endl; }

};

class Child : public Parent
{
public:
	Child() { cout << "자식 생성자!" << endl; }
	~Child() { cout << "자식 소멸자!" << endl; }
};

int main() {
	Parent* p = new Child();
	delete p;
	return 0;
}