#pragma once
#include <iostream>
#include <string>

using namespace std;

class Box
{
private:
	int originMap[4][4];
	int questionMap[4][8];
	int temp, shuffle1, shuffle2, shuffle3, shuffle4;
	int x = 0;
	int y = 1;
	int count = 0;
	int first, second;
	int challenge = 0;
public:
	// 박스 만들기 및 섞기
	void Render();
	// 박스 출력
	void Print();
	// 포인터 이동
	void Move(int);
	// 2개 숫자 확인
	void Check();
	// 끝
	void End();
};

