#include"SlidePuzzle.h"
#include <conio.h>

using namespace std;

int main() {

	SlidePuzzle s;
	s.Init();

	int user;

	while (true) {
		cout << "============ °ÔÀÓ ============" << endl;
		cout << "made by minki" << endl;
		s.Render();
		user = _getch();
		s.Update(user);
		system("cls");
	}

	return 0;
}