#include<iostream>

using namespace std;

/*
1.��Ӱ��迡�� ���� �մ� �� Ŭ�������� �ڽ� Ŭ������ ������ �� ������ �����͸�
�θ� Ŭ������ ������ �� ������ �����ͷ� ����ȯ �Ұ�� ���̳���....

2.�ݴ��� ��� ����ƽ....

�ϳ� �̻��� �����Լ��� ���� �θ�Ŭ���� ���!!!
*/

class Parent
{
public:
	virtual void Print() {
		cout << "�θ�Ŭ����!!!" << endl;
	}
};

class Child :public Parent
{
public:
	void Print() {
		cout << "��ӹ��� �ڽ�Ŭ����!!!" << endl;
	}
};
int main() {
	/*Parent* pParent = new Child;
	Child* pChild = dynamic_cast<Child*>(pParent);
	pChild->Print();*/

	// pParent�� ����Ű�� ����� pChild�� ����ų�� ���� ��Ȳ
	Parent* pParent = new Parent;
	Child* pChild = dynamic_cast<Child*>(pParent);
	if (pChild == NULL) {
		cout << "����ȯ ����!!" << endl;
	}
	else pChild->Print();

	return 0;
}