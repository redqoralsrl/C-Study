#include "Student.h"

void Student::SetScore(const int s1, const int s2, const int s3)
{
	score[0] = s1;
	score[1] = s2;
	score[2] = s3;
}

void Student::ShowScore()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "����" << i + 1 << ":" << score[i] << endl;
	}
	cout << "���� : " << sum << endl;
	cout << "��� : " << average << endl;
}

void Student::SumAverage()
{
	for (int i = 0; i < 3; i++)
	{
		sum += score[i];
	}
	average = sum / 3.0f;
}

Student::Student()
{
	cout << "���� ������" << endl;
	average = 0.0f;
	sum = 0;

	for (int i = 0; i < 3; i++) {
		score[i] = 0;
	}
}

Student::Student(const int s1, const int s2, const int s3)
{
	cout << "������ �����ε�" << endl;
	average = 0.0f;
	sum = 0;
	score[0] = s1;
	score[1] = s2;
	score[2] = s3;
}

Student::~Student()
{
	cout << "���� �Ҹ���" << endl;
}
