#include<iostream>

using namespace std;

// ���
class Parent
{
public:
	Parent() { cout << "�θ������()!!" << endl; };
	~Parent() { cout << "�θ�Ҹ���()!!" << endl; };

private:
};


class Son : public Parent
{
public:
	Son() { cout << "�ڽĻ�����()!!" << endl; };
	~Son() { cout << "�ڽļҸ���()!!" << endl; };

private:
};

class Parent1
{
private:
	int x;
	int y;
public:
	Parent1() { cout << "�θ� ������()!!!" << endl; };
	Parent1(int _x, int _y) : x(_x), y(_y) {
		cout << "�θ� ������(_x, _y)!!!" << endl;
	};
	~Parent1() { cout << "�θ� �Ҹ���()!!!" << endl; };

};

class Son1 : public Parent1
{
private:
	int width;
	int height;

public:
	// �Ű������� �ִ� �ٸ� �����ڸ� ȣ���Ϸ��� �ڽ�Ŭ���� ������ ����� �ڿ�
	// �ݷ��� ���� �� ���ϴ� �θ� Ŭ���� �����ڸ� �ۼ��ϸ� �ȴ�.
	Son1(int x, int y, int w, int h) :Parent1(x, y) {
		width = w;
		height = h;
		cout << "�ڽ� ������(x,y,w,h)!!" << endl;
	};
	~Son1() { cout << "�ڽ� �Ҹ���()!!" << endl; };


};

int main() {
	Son s;
	Son1* b = new Son1(0, 0, 100, 100);
	delete b;
	return 0;
}