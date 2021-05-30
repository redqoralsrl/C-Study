#include "Card.h"
#include <Windows.h>
void Card::Render()
{
	int number = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			box[j][i] = number;
			box[j+2][i] = number;
			number++;
		}
	}

	srand(time(NULL));
	for (int i = 0; i < 777; i++) {
		ran1 = rand() % 4;
		ran2 = rand() % 4;
		ran3 = rand() % 4;
		ran4 = rand() % 4;
		temp = box[ran1][ran2];
		box[ran1][ran2] = box[ran3][ran4];
		box[ran3][ran4] = temp;
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0) {
				show[j][i] = 0;
			}
			else {
				show[j][i] = 1;
			}
		}
	}
}

void Card::Print()
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0) {
				if (show[j][i] == 0) {
					cout << "[?]" << "\t";
				}
				else {
					cout << "[" << show[j][i] << "]" << "\t";
				}
			}
			else {
				if (j == x && i == y) {
					cout << " ^ " << "\t";
				}
				else {
					cout << "  " << "\t";
				}
			}
		}
		cout << endl;
		cout << endl;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << box[j][i] << "\t";
		}
		cout << endl;
		cout << endl;
	}
	cout << "횟수 : " << total << endl;
}

int Card::Check()
{
	if (count == 2) {
		total++;
		count = 0;
		system("cls");
		cout << "        카드 짝 맞추기 게임!" << endl;
		cout << endl;
		Card::Print();
		if (sample1 != sample2) {
			Sleep(1000);
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 4; j++) {
					if (show[j][i] == sample1) {
						show[j][i] = 0;
					}
					if (show[j][i] == sample2) {
						show[j][i] = 0;
					}
				}
			}
		}
	}
	int score = 0;
	for (int i = 0; i < 8; i+=2) {
		for (int j = 0; j < 4; j++) {
			if (show[j][i] != 0) {
				score++;
			}
		}
	}
	return score;
}

void Card::Update(int keyboard)
{
	switch (keyboard) {
	case 75: // 왼
		if (x != 0) {
			x -= 1;
		}
		break;
	case 72: // 위
		if (y != 1) {
			y -= 2;
		}
		break;
	case 77: // 오
		if (x != 3) {
			x += 1;
		}
		break;
	case 80: // 아
		if (y != 7) {
			y += 2;
		}
		break;
	case 32: // 스페이스바
		switch (y) {
		case 1:
			z = 0;
			break;
		case 3:
			z = 1;
			break;
		case 5:
			z = 2;
			break;
		case 7:
			z = 3;
			break;
		}
		if (show[x][y - 1] == 0) {
			show[x][y - 1] = box[x][z];
			count++;
			if (count == 1) sample1 = box[x][z];
			if (count == 2) sample2 = box[x][z];
		}
		break;
		default:
			break;
	}
}
//0 0 0 0    0
//1 1 1 1  1 1
//0 0 0 0    2
//1 1 1 1  3 3
//0 0 0 0   
//1 1 1 1  5
//0 0 0 0   
//1 1 1 1  7
