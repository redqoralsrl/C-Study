#include <iostream>

using namespace std;

int su(int, int);
float su(float, float);

int main() {
	// �Լ��� �����ε�
	// 
	// ���� ���� �Լ��� ���� �̸����� �����Ѵ�
	// 1. �Լ��� �������� �ٸ� ���
	// 2. �Լ��� ����Ҷ� �� �� �̻��� �Լ��� �����Ǵ� ���
	cout << "�� ������ �Է��Ͻʽÿ�. \n";
	int a, b;
	cin >> a >> b;
	cout << "�� ������ ���� " << su(a, b) << "�Դϴ�.\n";
	cout << "�� �Ǽ��� �Է��Ͻʽÿ�. \n";
	float c, d;
	cin >> c >> d;
	cout << "�� �Ǽ��� ���� " << su(c, d) << "�Դϴ�.\n";

}

int su(int a, int b)
{
	return a + b;
}

float su(float a, float b)
{
	return a + b;
}
