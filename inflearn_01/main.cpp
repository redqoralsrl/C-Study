#include<iostream>
#include<climits> // ���̺귯�� F12������ �����´�

using namespace std;

int main() {
	
	// ����
	// 
	// ������ ũ�⸦ �� Ȯ���ϰ� �˸��� �ڷ����� �����ϴ� ����
	// �޸𸮿� ȿ�����̴�
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	// ���� ���� ������ �� ����
	// ��� ���� ����ŭ ���� ���� �þ��
	// �����ϴ� ������ �þ��.
	unsigned int a;
	unsigned int b;
	unsigned long c;
	unsigned long long d;
	// int, short, long, long long, char, bool
	char s[] = { 'a','b','c','\0' }; // �޸� ���� �������� ���̶�� \0�� �־��ش�
	cout << s << endl;
	// bool : 0 (false) Ȥ�� 1 (true)
	bool ss = 0;
	bool ss1 = 1;
	bool ss2 = 10; // 0 �̿��� ��� ���� 1�� �����Ѵ�
	cout << ss << " " << ss1 << " " << ss2 << endl;

	// ���
	// 	   
	// ���� ���̸� ���ϴ� ���α׷�
	int r = 3;
	float sa = r * r * 3.14;
	cout << sa << endl;
	// 1. �ٲ� �ʿ䰡 ���� ��
	// 2. �ٲ��� �ȵǴ� ��
	// ���
	const float PIE = 3.1415926535; // #defind PIE = 3.1415926535;�� C��Ÿ�ϰ� ����
	float ff = r * r * PIE;
	cout << ff << endl;

	// �������� ��ȯ
	// 1. Ư�� ���������� ������ �ٸ� ������ ���� ���� �������� ��
	// 2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	// 3. �Լ��� �Ű������� �����Ҷ�
	int ab = 3.141592; // �Ҽ����� ���󰣴�
	cout << ab << endl;
	// ���������� �������� ��ȯ
	// typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;
	// C++ �������� �������� ��ȯ
	// static_cast<typeName>
	cout << static_cast<int>(ch) << endl;

	return 0;
}