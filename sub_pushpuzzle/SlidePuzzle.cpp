#include "SlidePuzzle.h"

void SlidePuzzle::Init()
{
	//srand(time(NULL));

	for (int i = 24; i >= 0; i--)
	{
		number[save - i] = i;
	}
	for (int i = 0; i < 100; i++)
	{
		dest = rand() % 24;
		sour = rand() % 24;
		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

}
//  0  1  2  3  4
//  5  6  7  8  9
// 10 11 12 13 14
// 15 16 17 18 19
// 20 21 22 23 24
void SlidePuzzle::Update(int user)
{
	int temp;
	switch (user)
	{
	case 75: // 좌측
		if (save % 5 == 0) break;
		else {
			temp = number[save];
			number[save] = number[save - 1];
			number[save - 1] = temp;
			save = save - 1;
		}
		break;
	case 77: // 우측
		if (save % 5 == 4) break;
		else {
			temp = number[save];
			number[save] = number[save + 1];
			number[save + 1] = temp;
			save = save + 1;
		}
		break;
	case 72: // 위쪽
		if (save < 5) break;
		else {
			temp = number[save];
			number[save] = number[save - 5];
			number[save - 5] = temp;
			save = save - 5;
		}
		break;
	case 80: // 아래쪽
		if (save > 19) break;
		else {
			temp = number[save];
			number[save] = number[save + 5];
			number[save + 5] = temp;
			save = save + 5;
		}
		break;
	default:
		break;
	}
}

void SlidePuzzle::Render()
{
	for (int i = 0; i < 25; i++) {
		cout << number[i] << "\t";
		if ((i + 1) % 5 == 0) {
			cout << endl << endl << endl;
		}
	}
}
