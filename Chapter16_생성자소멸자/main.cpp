#include<iostream>

using namespace std;

// 상속
class Parent
{
public:
	Parent() { cout << "부모생성자()!!" << endl; };
	~Parent() { cout << "부모소멸자()!!" << endl; };

private:
};


class Son : public Parent
{
public:
	Son() { cout << "자식생성자()!!" << endl; };
	~Son() { cout << "자식소멸자()!!" << endl; };

private:
};

class Parent1
{
private:
	int x;
	int y;
public:
	Parent1() { cout << "부모 생성자()!!!" << endl; };
	Parent1(int _x, int _y) : x(_x), y(_y) {
		cout << "부모 생성자(_x, _y)!!!" << endl;
	};
	~Parent1() { cout << "부모 소멸자()!!!" << endl; };

};

class Son1 : public Parent1
{
private:
	int width;
	int height;

public:
	// 매개변수가 있는 다른 생성자를 호출하려면 자식클래스 생성자 헤더의 뒤에
	// 콜론을 붙인 후 원하는 부모 클래스 생성자를 작성하면 된다.
	Son1(int x, int y, int w, int h) :Parent1(x, y) {
		width = w;
		height = h;
		cout << "자식 생성자(x,y,w,h)!!" << endl;
	};
	~Son1() { cout << "자식 소멸자()!!" << endl; };


};

int main() {
	Son s;
	Son1* b = new Son1(0, 0, 100, 100);
	delete b;
	return 0;
}