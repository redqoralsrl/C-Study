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
	// ���� 3�� ��������
	void MakeRandom();

	// üũ�ϱ�
	void Check(int user[3]);

	// ����
	void Show();

	// ���Ͻ� ����
	void End(int user[3]);
};

