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
	// static_cast : ���´� ���̳��Ͱ� ����
	// �����Ϸ��� �ڽ�Ŭ������ ������ �� ������ �����͸� �θ� Ŭ������ ������ �� �����������ͷ�..
	// �Ӹ� �ƴ϶� �θ�Ŭ������ ������ �� ������ �����͵� �ڽ�Ŭ������ ������ �� �����������ͷ�
	// �ƹ��� ���Ǿ��� ����ȯ ���� ������ å���� �ڱⰡ �����Ѵ�.
	Car* pCar1 = new Truck(80, 200);
	// pCar1�� Truck�� ������ ������ ��ȯ! å���� ��������!
	Truck* pTurck1 = static_cast<Truck*>(pCar1);
	pTurck1->ShowCarState();
	cout << endl;

	Car* pCar2 = new Car(100);
	Truck* pTruck2 = static_cast<Truck*>(pCar2);
	pTruck2->ShowCarState();
	return 0;
}