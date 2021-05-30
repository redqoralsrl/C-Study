#pragma once
#include <iostream>

using namespace std;

class Slide
{
private:
	int box[5][5];
	int temp, ran1, ran2, ran3, ran4;
	int x = 4;
	int y = 4;
public:
	// 랜덤 박스 생성
	void Render();
	// 박스 보여주기
	void Print();
	// 박스 업데이트
	void Update(int);
	// 박스 체크
	int Check();
};

