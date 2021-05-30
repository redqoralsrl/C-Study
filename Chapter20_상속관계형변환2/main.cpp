#include <iostream>

using namespace std;

class Car
{
private:
	int fuelGuage;
public:
	Car(int fuel) : fuelGuage(fuel) {};
	void ShowCarState()const {
		cout << "남은연료 : " << fuelGuage << endl;
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
		cout << "무게 : " << weight << endl;
	}
};

int main() {
	// static_cast : 형태는 다이나믹과 동일
	// 컴파일러는 자식클래스의 포인터 및 참조형 데이터를 부모 클래스의 포인터 및 참조형데이터로..
	// 뿐만 아니라 부모클래스의 포인터 및 참조형 데이터도 자식클래스의 포인터 및 참조형데이터로
	// 아무런 조건없이 형변환 ㄱㄱ 하지만 책임은 자기가 져야한다.
	Car* pCar1 = new Truck(80, 200);
	// pCar1를 Truck의 포인터 형으로 변환! 책임은 내가진다!
	Truck* pTurck1 = static_cast<Truck*>(pCar1);
	pTurck1->ShowCarState();
	cout << endl;

	Car* pCar2 = new Car(100);
	Truck* pTruck2 = static_cast<Truck*>(pCar2);
	pTruck2->ShowCarState();
	return 0;
}