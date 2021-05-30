// ����ó����
// �ܺο� ����� �Լ��� ��� ���� ����ϱ� ���ؼ� ������Ͽ� ���´�
#include<iostream> // input output ����
#include<string> // ���ڿ� Ÿ�� ����

// int main() { // inteager : ���������� ��ȯ
// return 0;
// }

//void main() { // �ƹ��͵� ���� ���㸦 ��ȯ�Ѵ�
//}

// ��ɹ�(statement) ������ ����ϰ� ��ǻ�Ϳ� �˷��ִ� �� ���ȴ�
// �Ⱥٿ��ָ� �ٸ��� �ٿ��ִ� ���ŷο��� �ִ�
using namespace std;

int main() {
	// �Է°� ���
	std::cout << "����� ������" << std::endl;
	cout << "����� ������" << endl; // using namespace std;�� ����ϸ� ��������
	cout << "���̸� �Է��ϼ��� : ";
	int age;
	cin >> age;
	cout << "���̴� " << age << "(��)�Դϴ�" << endl;

	cout << "===============================" << endl;

	// ����
	// ������ �����͸� �����ϱ� ���� ���α׷��� ���� �Ҵ���� �޸� ������ ���Ѵ�
	// ������ ������ �Ǽ��� ������ ������ �� �ִ�.
	// ������ : int, short, long, long long
	// ������ : char
	// ���� : bool
	// �ε��Ҽ��� : float, double, long double

	cout << "int ������ : " << sizeof(int) << "����Ʈ" << endl;
	cout << "short ������ : " << sizeof(short) << "����Ʈ" << endl;
	cout << "long ������ : " << sizeof(long) << "����Ʈ" << endl;
	cout << "char ������ : " << sizeof(char) << "����Ʈ" << endl;
	cout << "bool ������ : " << sizeof(bool) << "����Ʈ" << endl;
	cout << "float ������ : " << sizeof(float) << "����Ʈ" << endl;
	cout << "double ������ : " << sizeof(double) << "����Ʈ" << endl;

	// ������ �޸� �ּ�
	// ������ �⺻������ �޸��� �ּҸ� ����ϴ� ������ �Ѵ�
	// ������ �����Ҷ��� �޸��� �ּҸ� �����ϴ� ���� �ƴ� �ش� �ּҿ�
	// ����� �����͸� �����ϰ� �ȴ�. ���� ������ �����Ͱ� ����� �ּһӸ� �ƴ϶�
	// ����� ������ ���̿� ���¿� ���� ������ �� ���� ����ؾ� �Ѵ�.

	int num = 1;
	int num1 = 1.2123f; // �ڿ� �Ҽ����� �߸���
	float fNum = 1.5f;
	char str = 'd';
	char stra[5] = "�ѱ�"; // �ѱ��� 2����Ʈ�� ����� 1����Ʈ�� ����� 1����Ʈ�� �����Ѵ�
	bool isActive = false;
	string s = "english";
	cout << num << endl;
	cout << num1 << endl;
	cout << fNum << endl;
	cout << str << endl;
	cout << isActive << endl;

	cout << "===============================" << endl;

	// ��Ʈ����
	// & : 2���� ��Ʈ�� ��� 1�϶� 1�� ��ȯ�Ѵ�
	// 0&0 : 0
	// 0&1 : 0
	// 1&0 : 0
	// 1&1 : 1
	//128 64 32 16 8 4 2 1
	// 0   0  0  0 0 0 0 0

	int bitNum = 15; // 15 => 0000 1111
	int bitNum1 = 20; // 20 => 0001 0100

	// 0000 0100 => 4
	int bitResult = bitNum & bitNum1;
	cout << bitResult << endl;

	// | : 2���� ��Ʈ �߿� �ϳ��� 1�̸� 1��ȯ
	// 0|0 : 0
	// 0|1 : 1
	// 1|0 : 1
	// 1|1 : 1

	int bitNumber = 15; // 0000 1111
	int bitNumber1 = 20; // 0001 0100
	
	// 0001 1111 => 31
	int bitResult1 = bitNumber | bitNumber1;
	cout << bitResult1 << endl;

	// XOR
	// ^ : 2���� ��Ʈ�� ���� �ٸ� ��쿡�� 1�� ��ȯ
	// 0^0 : 0
	// 0^1 : 1
	// 1^0 : 1
	// 1^1 : 0

	int bitNumbers = 15; // 0000 1111
	int bitNumbers1 = 20; // 0001 0100

	// 0001 1011 => 27
	int bitResult2 = bitNumbers ^ bitNumbers1;
	cout << bitResult2 << endl;

	// shift����(��Ʈ�̵�)
	int sNum = 15; // 00001111
	int result = sNum << 1; // 00011110 �Ѻ�Ʈ�� �о��ش�
	int result1 = sNum << 2; // 00011110
	int result2 = sNum >> 3; // 00000001
	cout << result << endl;
	cout << result1 << endl;
	cout << result2 << endl;
	// ��Ʈ�� ���� �������� 1ĭ�� �̵��Ҷ����� ������ ���� 2��
	// �ݴ�� ���������� �̵��Ҷ����� ������ ���� 2�� ����������.
	// ��Ȳ�� ���� ������ �������� ��Ʈ�̵����� ��ü �Ҽ� �ִ�.

	return 0;
}
