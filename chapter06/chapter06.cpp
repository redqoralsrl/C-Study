#include<iostream>

using namespace std;

int num = 0; // ��������

int main() {
	extern int num1;
	extern int num2;
	extern int num3;

	cout << num1 << " " << num2 << " " << num3 << endl;

	int count = 0;
	while (true) {
		// �������� : ���������� ������ �κ������� ������ �༮
		// static : �ʱ�ȭ�� �� �ѹ��� �Ͼ��
		static int cow = 0;
		if (cow == 10) break;
		cow++;
		count++;
		cout << cow << endl;
	}

	// �ζ� ��ȣ ������
	cout << "�ζ� ��ȣ ������" << endl;
	srand(time(NULL));
	
	int lottoNumber[45];
	int dest, sour, temp;
	for (int i = 0; i < 45; i++) {
		lottoNumber[i] = i + 1;
	}
	for (int i = 0; i < 777; i++) {
		dest = rand() % 45; // 0~44
		sour = rand() % 45;
		temp = lottoNumber[dest];
		lottoNumber[dest] = lottoNumber[sour];
		lottoNumber[sour] = temp;
	}
	for (int i = 0; i < 6; i++) {
		cout << "�̹��� �ζ� ��ȣ : " << lottoNumber[i] << endl;
	}
	return 0;
}