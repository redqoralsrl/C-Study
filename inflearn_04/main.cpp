#include<iostream>

using namespace std;

int main() {
	// ����ü(union)
	// ���� �ٸ� ������ ���� �ѹ��� �Ѱ����� ������ �� ����
	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	test.longVal = 33;
	test.floatVal = 3.33; // intVal�� longVal�� �̻��� ���� ����
	// �׷��� ���� ������ ���¸� �־�� �Ѵ�

	// ����ü(enum)
	// ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���
	enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
	// 1. spectrum�� ���ο� �������� �̸����� �����
	// 2. red, orange, yello... �� 0���� 7���� ���� ���� ����
	// ��Ÿ���� ��ȣ ����� �����
	
	spectrum a = orange;
	cout << a << endl; // 1�� ���´�

	int b;
	b = blue; // 4
	b = blue + 3; // 7
	
	return 0;
}