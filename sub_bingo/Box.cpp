#include "Box.h"

void Box::Init()
{
	srand(time(NULL));

	for (int i = 0; i <= 24; i++) {
		box[i] = i;
	}

	for (int i = 0; i < 1000; i++) {
		one = rand() % 24;
		two = rand() % 24;
		three = box[one];
		box[one] = box[two];
		box[two] = three;
	}
}

void Box::Update(int user)
{
	for (int i = 0; i <= 24; i++) {
		if (box[i] == user) {
			box[i] = 32;
		}
	}
}

void Box::Render()
{
	for (int i = 0; i <= 24; i++) {
		if (box[i] == 32) {
			cout << "#" << "\t";
		}
		else {
			cout << box[i] << "\t";
		}
		if ((i + 1) % 5 == 0) {
			cout << endl << endl;
		}
	}
}

void Box::Check()
{
	row = 0;
	cal = 0;
	ex = 0;
	for (int i = 0; i <= 4; i++) {
		if (box[i] ==32 && box[i+5] == 32 && box[i+10] == 32 && box[i+15] == 32 && box[i+20] == 32) {
			row+=1;
		}
	}
	for (int i = 0; i <= 21; i += 5) {
		if (box[i] == 32 && box[i + 1] == 32 && box[i + 2] == 32 && box[i + 3] == 32 && box[i + 4] == 32) {
			cal += 1;
		}
	}
	if (box[0] == 32 && box[6] == 32 && box[12] == 32 && box[18] == 32 && box[24] == 32) {
		ex += 1;
	}
	if (box[4] == 32 && box[8] == 32 && box[12] == 32 && box[16] == 32 && box[20] == 32) {
		ex += 1;
	}
	if (row + cal + ex >= 3) {
		cout << "°ÔÀÓ ³¡" << endl;
	}
}
