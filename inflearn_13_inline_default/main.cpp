#include <iostream>

using namespace std;

// �ζ���
inline float square(float x) { return x * x; }

const int SIZE = 8;
// ����Ʈ
int sumArr(int*, int n = 1);

int main() {
	// �ζ��� �Լ�

	// �Ϲ������� �Լ��� ȣ���� �Լ��� �ּҷ� �����ϴ� ����
	// �ζ��� �Լ��� �����ϵ� �Լ� �ڵ尡 ���α׷��� �ٸ� �ڵ忡 ����
	// �������� �ζ��� �Լ� ȣ�� = ������ �ƴ� �׿� �����ϴ� �Լ� �ڵ�� ��ü
	int a = 5;
	cout << "�� ���� ���̰� " << a << "�� ���簢���� ���̴�?" << endl;
	float b = square(a);
	cout << b << endl;

	// ����Ʈ �Ű�����
	// ����Ʈ�� �����ʺ��� ���� ����Ѵ� ���ʺ��ʹ� �� �� �� ����
	int arr[SIZE] = { 1,2,4,8,16,32,64 };
	int sum = sumArr(arr, SIZE);
	cout << "�� : " << sum << "�Դϴ�" << endl;

	return 0;
}

int sumArr(int* arr, int n)
{
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}
