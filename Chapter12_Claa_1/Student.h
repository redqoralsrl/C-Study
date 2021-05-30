#pragma once
#include<iostream>

using namespace std;

class Student
{
private:
	int sum;
	int score[3];
	double average;
	int num;
public:
	void SetScore(const int s1, const int s2, const int s3);
	void ShowScore();
	void SumAverage();

	Student();
	Student(const int s1, const int s2, const int s3);
	~Student();
};

