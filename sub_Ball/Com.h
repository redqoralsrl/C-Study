#pragma once
#include<iostream>

using namespace std;

class Com
{
private:
	int box[3];
	int strike = 0;
	int ball = 0;
	int out = 0;
	
public:
	// 숫자 3개 랜덤추출
	void MakeRandom();

	// 체크하기
	void Check(int user[3]);

	// 보기
	void Show();

	// 답일시 종료
	void End(int user[3]);
};

