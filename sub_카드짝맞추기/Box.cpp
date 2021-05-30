#include "Box.h"

void Box::Render()
{
	srand(time(NULL));
	int number = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j % 2 == 0) {
				originMap[i][j] = number;
			}
			else {
				originMap[i][j] = number;
				number++;
			}

		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0) {
				questionMap[j][i] = 0;
			}
			else {
				questionMap[j][i] = 1;
			}
		}
	}
	for (int i = 0; i < 900; i++) {
		shuffle1 = rand() % 4;
		shuffle2 = rand() % 4;
		shuffle3 = rand() % 4;
		shuffle4 = rand() % 4;

		temp = originMap[shuffle1][shuffle2];
		originMap[shuffle1][shuffle2] = originMap[shuffle3][shuffle4];
		originMap[shuffle3][shuffle4] = temp;
	}
}

void Box::Print()
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0) {
				if (questionMap[j][i] == 0) {
					cout << "[?]" << "\t";
				}
				else {
					cout << "[" << questionMap[j][i] << "]" << "\t";
				}
			}
			else {
				if (y == i && x == j) {
					cout << " ^ " << "\t";
				}
				else {
					cout << "   " << "\t";
				}
			}
		}
		cout << endl;
	}
	cout << "=========È½¼ö : " << challenge << endl;

	cout << endl; cout << endl;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			cout << questionMap[j][i] << "\t";

		}
		cout << endl;
	}
	cout << endl; cout << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << originMap[j][i] << "\t";

		}
		cout << endl;
	}
}

void Box::Move(int nums)
{
	int tems = 0;
	switch (nums)
	{
	case 75: // ÁÂÃø
		if (x == 0) break;
		else x -= 1;
		break;
	case 77: // ¿ìÃø
		if (x == 3) break;
		else x += 1;
		break;
	case 72: // À§ÂÊ
		if (y == 1) break;
		else y -= 2;
		break;
	case 80: // ¾Æ·¡ÂÊ
		if (y == 7) break;
		else y += 2;
		break;
	case 32:
		switch (y)
		{
		case 1:
			tems = 0;
			break;
		case 3:
			tems = 1;
			break;
		case 5:
			tems = 2;
			break;
		case 7:
			tems = 3;
			break;
		}
		if (questionMap[x][y - 1] == 0) {
			questionMap[x][y - 1] = originMap[x][tems];
			count += 1;
			if (count == 1) {
				first = originMap[x][tems];
			}
			else if (count == 2) {
				second = originMap[x][tems];
			}
		}
		break;
	}

}
void Box::Check()
{
	if (count == 2) {
		challenge++;
		count = 0;
		if (first != second) {
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 4; j++) {
					if (questionMap[j][i] == first) {
						questionMap[j][i] = 0;
					}
					if (questionMap[j][i] == second) {
						questionMap[j][i] = 0;
					}
				}
			}
		}
	}
}
void Box::End()
{
	int end = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0) {
				if (questionMap[j][i] != 0) {
					end++;
				}
			}
		}
	}
	if (end == 16) {
		cout << "³¡³µ½À´Ï´Ù" << endl;
		exit(0);
	}
}
// 0  1  2  3   
// 4  5  6  7   1
// 8  9 10 11   
// 12 13 14 15  3
// 16 17 18 19
// 20 21 22 23  5
// 24 25 26 27 
// 28 29 30 31  7

// 0  1  2  3   0
// 4  5  6  7   1
// 8  9 10 11   2
// 12 13 14 15  3