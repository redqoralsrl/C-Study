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
	// ���� �ڽ� ����
	void Render();
	// �ڽ� �����ֱ�
	void Print();
	// �ڽ� ������Ʈ
	void Update(int);
	// �ڽ� üũ
	int Check();
};

