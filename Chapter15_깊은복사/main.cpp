#include<iostream>
#pragma warning(disable:4996)
using namespace std;

// ����Ʈ ��������ڴ� ��� �� ����� �����Ѵ�
// �� ����� ���� ����
// �� ��쿡�� ��������� ���� �޸� ������ �����ϴ� ��� ������ �����

// ���� �������� ȣ��Ǵ� ����
// 1. ������ ������ ��ü�� �̿��ؼ� ���ο� ��ü�� �ʱ�ȭ �ϴ� ���
// 2. call by value ����� �Լ� ȣ��������� ��ü�� ���ڷ� �����ϴ� ���
// 3. ��ü�� ��ȯ�ϵ� ���������� ��ȯ���� �ʴ� ���

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myName, int myAge) {
		int len = strlen(myName) + 1;
		name = new char[len];
		strcpy(name, myName); // myName�� name�� �����ϰڴ�
		age = myAge;
	}
	// ���� ������ ����(��������)
	// ��� �Ӹ� �ƴ϶� �����ͷ� �����ϴ� ������ ��� �����Ѵ�
	// ��� ���� age�� ����� ����� �����ϰ�
	// �޸� ���� �Ҵ��� ���ڿ� ����, �Ҵ�� �޸��� �ּҰ��� ��� name�� ����
	Person(const Person& copy) :age(copy.age) {
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	~Person() {
		delete[]name; // �迭 ����°�
		cout << "�Ҹ��� ȣ��!!" << endl;
	}
	void Print()const {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}


};

int main() {

	Person p("õ�����", 1);
	// ������ ����� �ϳ��� ���ڿ��� ���ÿ� �����ϰ� �ȴ�
	// �̷� ���� ��ü�� �Ҹ�������� ������ �߻��Ѵ�
	// ���� ��Ȳ���� name�� ���ÿ� �����ϰ� �ֱ� ������ �̹� ������
	// ���ڿ��� delete�ϱ� �����̴�
	Person p2 = p;
	p.Print();
	p2.Print();

	return 0;
}