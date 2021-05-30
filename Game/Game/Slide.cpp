#include "Slide.h"

void Slide::Render()
{
	srand(time(NULL));

	int number = 24;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			box[j][i] = number;
			number--;
		}
	}

	for (int i = 0; i < 777; i++) {
		ran1 = rand() % 5;
		ran2 = rand() % 5;
		ran3 = rand() % 5;
		ran4 = rand() % 5;
		if (box[ran1][ran2] == 0 || box[ran3][ran4] == 0) {
			continue;
		}
		temp = box[ran1][ran2];
		box[ran1][ran2] = box[ran3][ran4];
		box[ran3][ran4] = temp;
	}
}

void Slide::Print()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (box[j][i] < 10) {
				cout << " " << box[j][i] << "\t";
			}
			else {
				cout << box[j][i] << "\t";
			}
		}
		cout << endl;
		cout << endl;
	}
}

void Slide::Update(int cursor)
{
	switch (cursor)
	{
	case 75: // ¿Þ
		if (x != 0) {
			temp = box[x][y];
			box[x][y] = box[x - 1][y];
			box[x - 1][y] = temp;
			x -= 1;
		}
		break;
	case 72: // À§
		if (y != 0) {
			temp = box[x][y];
			box[x][y] = box[x][y - 1];
			box[x][y - 1] = temp;
			y -= 1;
		}
		break;
	case 77: // ¿À
		if (x != 4) {
			temp = box[x][y];
			box[x][y] = box[x + 1][y];
			box[x + 1][y] = temp;
			x += 1;
		}
		break;
	case 80: // ¾Æ
		if (y != 4) {
			temp = box[x][y];
			box[x][y] = box[x][y + 1];
			box[x][y + 1] = temp;
			y += 1;
		}
		break;
	default:
		break;
	}
}

int Slide::Check()
{
	int result = 0;
	int number = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (box[j][i] == number) {
				result++;
				number++;
			}
		}
	}
	if (result == 24) return result;
}
