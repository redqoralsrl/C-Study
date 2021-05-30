#include<iostream>

using namespace std;

// �Լ� �������̵�
// ��Ӱ��迡�� �θ�Ŭ������ ������ �ִ� �Լ���
// �ڽ�Ŭ���� ��ӵǾ� ���� Ŭ���������� ��밡��
// ����Լ� ������ �ʿ��ϸ� ����Լ��� �����Ǹ� �ϸ�ȴ�.

class Animal
{
public:
	void Speak() {
		cout << "Animal�� ¢�� �ִ�." << endl;
	}
};
class Dog : public Animal
{
public:
	void Speak() {
		Animal::Speak();
		cout << "���� �۸�!!" << endl;
	}
};

/*
�����Լ� : C++ �������� �̶�� Ư���� �����ϱ� ���� virtual Ű���尡 �����ȴ�
�����ǰ� ���� �ʾҴٸ� �θ� Ŭ������ �Լ��� ����ȴ� <=> ���ǰ� �Ǿ��ִٸ�
�ڽ�Ŭ������ �Լ��� ����ȴ�
�������� ���ɼ��� �ִ� ����Լ��� �����Լ��� �����ϴ°� ����.

��� �Լ��� �⺻������ �������ε��� �Ѵ�
�Ϲ� �Լ��� ������ �� �� ������ ������ �Ҷ�
ȣ��� �Լ��� �����Ǳ� ������ �������ε� ����

�������ε�(static-binding)
: ������ �ϴ� ���� ȣ��� �Լ��� ����
�������ε�(dynamic-binding)
: �����ϴ� ���� ȣ��� �Լ��� ����
�����Ͱ� ����Ű�� ��ü�� �����̳Ŀ� ���� ����
*/
class Eat
{
public:
	virtual void Taste() {
		cout << "��������!" << endl;
	}
};
class KoreaFood : public Eat
{
public:
	void Taste()override { // �缱��
		cout << "�ѽ��̳�!" << endl;
	}
};
class AmreicaFood : public Eat
{
public:
	// ����� �޴´�
};

int main() {
	Dog d;
	d.Speak();

	// ��ĳ������ �ϸ� �ڽ�Ŭ���� �߿��� �θ�Ŭ�����κ���
	// ��ӹ��� �κи� �����͸� ���� ��밡���ϴ�
	// dog ��ü �߿� Animal�� �ش�Ǵ� �κ��� ������ ������ ���� ���
	Eat* a = new KoreaFood();
	a->Taste();
	Eat* b = new AmreicaFood();
	b->Taste();
	return 0;
}