#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {
	// 구구단 2단 출력하기
	for (int i = 1; i <= 9; i++) {
		cout << 2 << " x " << i << " = " << 2 * i << endl;
	}
	// 구구단 2단 포인터 출력하기
	int* y = new int[9];
	for (int i = 0; i < 9; i++) {
		y[i] = i + 1;
	}
	for (int i = 0; i < 9; i++) {
		cout << 2 << " x " << y[i] << " = " << 2*y[i] << endl;
	}
	delete[] y;
	// 숫자를 입력받아 원하는 단 출력하기
	int num = 0;
	cout << "원하는 단을 말하세요 : ";
	cin >> num;
	for (int i = 1; i <= 9; i++) {
		cout << (int)num << " x " << i << " = " << (int)num * i << endl;
	}
	


	// 구구단 전부 출력하기
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			cout << j << " x " << i << " = " << setw(6) << left << j * i;
		}
		cout << endl;
	}
	


	// N - M 단 출력하기
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= b; i++) {
		for (int j = 2; j <= a; j++) {
			cout << j << " x " << i << " = " << setw(6) << left << j * i;
		}
		cout << endl;
	}


	// 홀수단을 거꾸로 출력하기
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			if (j % 2 == 1) {
				cout << j << " x " << (10 - i) << " = " << setw(6) << left << j * (10 - i);
			}
			else {
				cout << j << " x " << i << " = " << setw(6) << left << j * i;
			}
		}
		cout << endl;
	}


	// 홀수단만 짝수단만 출력하기
	string data_user;
	int nums;
	cin >> data_user >> nums;
	if (data_user == "odd" || data_user == "even") {
		for (int j = 1; j <= 9; j++) {
			for (int i = nums; i <= 9; i = i + 2) {
				cout << i << " x " << j << " = " << setw(6) << left << i * j;
			}
			cout << endl;
		}
	}

	return 0;
}