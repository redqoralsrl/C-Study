#include <iostream>

using namespace std;

class Parent
{
public:
	Parent() { cout << "�θ� ������!" << endl; }
	virtual ~Parent() { cout << "�θ� �Ҹ���!" << endl; }

};

class Child : public Parent
{
public:
	Child() { cout << "�ڽ� ������!" << endl; }
	~Child() { cout << "�ڽ� �Ҹ���!" << endl; }
};

int main() {
	Parent* p = new Child();
	delete p;
	return 0;
}