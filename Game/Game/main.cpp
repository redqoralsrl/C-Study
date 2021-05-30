#include "Bingo.h";
#include "Card.h";
#include "Slide.h";
#include <windows.h>
#include <conio.h>

int main() {
	int choose, bingo_input, slide_input, card_input;
	while (true) {
		system("cls");
		cout << "========�̴ϰ��� õ��========" << endl;
		cout << "1 : �������" << endl;
		cout << "2 : �������" << endl;
		cout << "3 : ī�����" << endl;
		cout << "0 : ����" << endl;
		cout << "Made by Minki" << endl;
		cin >> choose;
		if (cin.fail() || choose > 4) {
			cout << "�ش� ��ȣ�� �ƴϹǷ� �����մϴ�" << endl;
			choose = 0;
			cin.clear();
			cin.ignore(999, '\n');
		}
		system("cls");
		if (choose == 0) {
			cout << "�̿��� �ּż� �����մϴ�." << endl;
			cout << "Made by Minki" << endl;
			exit(0);
		}
		else if (choose == 1) {
			Bingo bingo;
			bingo.Render();
			while (true) {
				COORD pos = { 0, 0 };
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				cout << "        ���� 3���� �����!" << endl;
				cout << endl;
				bingo.Print();
				cin >> bingo_input;
				bingo.Update(bingo_input);
				int check = bingo.Check();
				if (check == 3) {
					break;
				}
			}
		}
		else if (choose == 2) {
			Slide slide;
			slide.Render();
			while (true) {
				COORD pos = { 0, 0 };
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				cout << "        ���ڸ� �����϶�!" << endl;
				slide.Print();
				slide_input = _getch();
				slide.Update(slide_input);
				int check = slide.Check();
				if (check == 24) {
					break;
				}
			}
		}
		else if (choose == 3) {
			Card card;
			card.Render();
			while (true) {
				system("cls");
				/*COORD pos = { 0, 0 };
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);*/
				cout << "        ī�� ¦ ���߱� ����!" << endl;
				cout << endl;
				card.Print();
				card_input = _getch();
				card.Update(card_input);
				int check = card.Check();
				if (check == 16) {
					break;
				}
			}
		}
	}
	return 0;
};
