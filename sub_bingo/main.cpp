#include "Box.h"

int main() {

	int pic;
	Box h;
	h.Init();
	while (true) {
		h.Render();
		cout << "��ȣ�� �Է��ϼ���";
		cin >> pic;
		h.Update(pic);
		h.Check();
		system("cls");
	}
}