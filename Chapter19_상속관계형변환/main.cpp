#include <iostream>

using namespace std;

class Car
{
private:
	int fuelGuage;
public:
	Car(int fuel) : fuelGuage(fuel) {};
	void ShowCarState()const {
		cout << "�������� : " << fuelGuage << endl;
	}
};
class Truck : public Car
{
private:
	int weight;
public:
	Truck(int fuel, int _weight) :Car(fuel), weight(_weight) {};
	void ShowCarState() {
		Car::ShowCarState();
		cout << "���� : " << weight << endl;
	}
};

int main() {
	// ������ ���� myCar�� ����Ű�� ����� �����δ� Truck
	Car* myCar = new Truck(100, 200);
	myCar->ShowCarState();
	// ����ȯ ���� ( ������ �ȵ����� �Ϲ����� ����� �ƴϴ�)
	// �θ�Ŭ���� ���������� �ڽ�Ŭ���� ������������ ����ȯ�ϴ� ���̴�
	Truck* myTruck = (Truck*)myCar;
	myTruck->ShowCarState();

	//static_cast
	//dynamic_cast
	//const_cast
	//reinterpret_cast

	// ��Ӱ��迡���� ������ ����ȯ
	// dynamic_cast<T>(expr)
	// ���� ���̿��� �ڷ����� �ֵ� ��ü�� �����ͳ� ������
	// ()���̿��� ��ȯ�� ����� ���´�
	// ������ ����ȯ?
	// -> ��Ӱ��迡 �����ִ� �� Ŭ���� ���̿��� �ڽ�Ŭ������ ������ ��
	// ������ �����͸� �θ�Ŭ������ ������ �� ������ �����ͷ� ����ȯ ���

	// ���̳��� ĳ��Ʈ�� ����ߴٶ�� ���� ��Ӱ��迡 �ִ� �ڽ�Ŭ������
	// ������ �� ������ �����͸� �θ�Ŭ������ ������ �� ������ �����ͷ�
	// ����ȯ �ϰڴ�
	Truck* pTrucks = new Truck(50, 100);
	Car* pCar5 = dynamic_cast<Car*>(pTrucks);
	return 0;
}