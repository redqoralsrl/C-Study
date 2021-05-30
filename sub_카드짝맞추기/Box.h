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
	// �ڽ� ����� �� ����
	void Render();
	// �ڽ� ���
	void Print();
	// ������ �̵�
	void Move(int);
	// 2�� ���� Ȯ��
	void Check();
	// ��
	void End();
};

