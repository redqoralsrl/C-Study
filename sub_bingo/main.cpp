#include "Box.h"

int main() {

	int pic;
	Box h;
	h.Init();
	while (true) {
		h.Render();
		cout << "번호를 입력하세요";
		cin >> pic;
		h.Update(pic);
		h.Check();
		system("cls");
	}
}