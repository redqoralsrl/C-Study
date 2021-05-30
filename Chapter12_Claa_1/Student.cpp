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
		cout << "점수" << i + 1 << ":" << score[i] << endl;
	}
	cout << "총점 : " << sum << endl;
	cout << "평균 : " << average << endl;
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
	cout << "나는 생성자" << endl;
	average = 0.0f;
	sum = 0;

	for (int i = 0; i < 3; i++) {
		score[i] = 0;
	}
}

Student::Student(const int s1, const int s2, const int s3)
{
	cout << "생성자 오버로딩" << endl;
	average = 0.0f;
	sum = 0;
	score[0] = s1;
	score[1] = s2;
	score[2] = s3;
}

Student::~Student()
{
	cout << "나는 소멸자" << endl;
}
