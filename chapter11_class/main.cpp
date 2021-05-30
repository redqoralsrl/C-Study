#include<iostream>
#include<string>

using namespace std;

// 구조체는 무조건 디폴트 퍼블릭이다.
// 클래스는 무조건 디폴트 프라이빗이다.
class Circle
{
private:
	int radius = 10;
	string color;
public:
	double calcArea() {
		return 3.14 * radius * radius;
	}
	void print();

	// 생성자 : 클래스가 메모리에 할당될때(객체생성시) 자동호출한다
	// 사용자가 정의하지 않으면 컴파일할때 자동으로 내용이 없는 빈 생성자를
	// 제공한다. 디폴트 생성자라고 한다.
	// 반환값이 없고 클래스 이름이랑 동일하다.
	// 외부에서 참조해야 하기 때문에 public에 둬야 한다.
	// 보통 멤버변수 초기화 할때 사용한다
	// 생성자도 함수이기 때문에 오버로딩이 가능하다
	Circle(); // 생성자
	Circle(int a, int b); // 오버로딩
	~Circle(); // 소멸자
	// 소멸자 : 생성자와 마찬가지로 자동으로 호출한다.
	// 보통 클래스 내에서 동적할당 해제등... 소멸시 필요한
	// 행동을 한다.
};
/*
	private :
	- 클래스 내부에서만 참조가능한 지정자(정보은닉)
	- 숨겨야 할 멤버 변수 등을 이곳에 사용
	- 클래스 디폴트
	public :
	- 외부에서 자유롭게 참조할 수 있다
	- 외부에서 직접적으로 멤버를 조작할 수 있기 때문에 공개할
	기능들은 이곳에 사용
	protected :
	- 클래스 내부와 상속관계에 있는 클래스에서만 접근이 가능한 지정자

	접근제어			클래스 내부		클래스 외부		상속클래스
	private :			O				X				X
	public :			O				O				O
	protected :			O				X				O
*/

int main() {

	Circle c;
	cout << c.calcArea() << endl;
	return 0;
}

void Circle::print()
{
	cout << "테스트" << endl;
}
