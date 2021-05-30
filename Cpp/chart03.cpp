#include<iostream>

using namespace std;

namespace Minki {
	void myFunc() {
		cout << "¹Î±âÀÇ ÇÔ¼ö!" << endl;
	}
}

namespace Parent {
	int num = 1;

	namespace Son {
		int num = 2;
	}
}

int main() {
	Minki::myFunc();
	cout << Parent::num << endl;
	cout << Parent::Son::num << endl;
	return 0;
}