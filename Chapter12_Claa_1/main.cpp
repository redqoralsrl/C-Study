#include"Student.h"

int main() {
	Student s;
	s.SetScore(1, 2, 3);
	s.SumAverage();
	s.ShowScore();
	cout << "=========================" << endl;

	Student s1(2,3,4);
	s1.SumAverage();
	s1.ShowScore();
	cout << "=========================" << endl;
	Student* s2 = new Student();//동적할당
	s2->SetScore(4, 5, 6);
	s2->SumAverage();
	s2->ShowScore();

	delete s2;
}