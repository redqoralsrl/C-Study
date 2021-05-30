#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main() {

	srand(time(NULL));

	char user[5] = "";
	int result = 0;
	int com = 0;

	while (true) {
		com = rand() % 3;

		cout << "¹¬ Âî ºü¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ";
		cin >> user;

		if (user != "¹¬" && user != "Âî" && user != "ºü") {
			cout << "´Ù½ÃÀÔ·ÂÇØ" << endl;
			break;
		}
		if (user == "¹¬") result = 0;
		if (user == "Âî") result = 1;
		if (user == "ºü") result = 2;

		switch (result)
		{
		case 0:
			if (com == 0) cout << "ºñ°å´Ù" << endl;
			if (com == 1) cout << "ÀÌ°å´Ù" << endl;
			if (com == 2) cout << "Á³´Ù" << endl;
			break;
		case 1:
			if (com == 0) cout << "Á³´Ù" << endl;
			if (com == 1) cout << "ºñ°å´Ù" << endl;
			if (com == 2) cout << "ÀÌ°å´Ù" << endl;
			break;
		case 2:
			if (com == 0) cout << "ÀÌ°å´Ù" << endl;
			if (com == 1) cout << "Á³´Ù" << endl;
			if (com == 2) cout << "ºñ°å´Ù" << endl;
			break;
		default:
			cout << "´Ù½Ã Á¦´ë·Î ÀÔ·ÂÇÏ¼¼¿ä!" << endl;
			break;
		}
		cout << "³»°¡³½°Å" << user << "ÄÄÅÍ³½°Å" << com << endl;
	}

	return 0;
}