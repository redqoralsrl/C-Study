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
	// 포인터 변수 myCar가 가르키는 대상이 실제로는 Truck
	Car* myCar = new Truck(100, 200);
	myCar->ShowCarState();
	// 형변환 연산 ( 문제는 안되지만 일반적인 방법은 아니다)
	// 부모클래스 포인터형을 자식클래스 포인터형으로 형변환하는 것이다
	Truck* myTruck = (Truck*)myCar;
	myTruck->ShowCarState();

	//static_cast
	//dynamic_cast
	//const_cast
	//reinterpret_cast

	// 상속관계에서의 안전한 형변환
	// dynamic_cast<T>(expr)
	// 꺽쇠 사이에는 자료형을 넣되 객체의 포인터나 참조형
	// ()사이에는 변환의 대상이 들어온다
	// 적절한 형변환?
	// -> 상속관계에 놓여있는 두 클래스 사이에서 자식클래스의 포인터 및
	// 참조형 데이터를 부모클래스의 포인터 및 참조형 데이터로 형변환 경우

	// 다이나믹 캐스트를 사용했다라는 것은 상속관계에 있는 자식클래스의
	// 포인터 및 참조형 데이터를 부모클래스의 포인터 및 참조형 데이터로
	// 형변환 하겠다
	Truck* pTrucks = new Truck(50, 100);
	Car* pCar5 = dynamic_cast<Car*>(pTrucks);
	return 0;
}