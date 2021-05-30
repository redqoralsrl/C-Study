#include<iostream>

using namespace std;

int num = 0; // 전역변수

int main() {
	extern int num1;
	extern int num2;
	extern int num3;

	cout << num1 << " " << num2 << " " << num3 << endl;

	int count = 0;
	while (true) {
		// 정적변수 : 전역변수의 단점을 부분적으로 보완한 녀석
		// static : 초기화는 딱 한번만 일어난다
		static int cow = 0;
		if (cow == 10) break;
		cow++;
		count++;
		cout << cow << endl;
	}

	// 로또 번호 생성기
	cout << "로또 번호 생성기" << endl;
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
		cout << "이번주 로또 번호 : " << lottoNumber[i] << endl;
	}
	return 0;
}