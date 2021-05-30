#include "Box.h"
#include <conio.h>

int main() {
	Box a;
	a.Render();
	int moves;
	while (true) {
		system("cls");
		cout << "=========카드 맞추기 게임=========" << endl;
		cout << "                    made by minki" << endl;
		a.Print();
		moves = _getch();
		a.Move(moves);
		a.Check();
		a.End();
	}
}