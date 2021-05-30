#include <iostream>
#include <vector>
using namespace std;

// vector<자료형> 변수명 : 벡터 생성
// vector<자료형> 변수명(숫자) : 숫자만큼 벡터 생성 후 0으로 초기화
// vector<자료형> 변수명 = {변수1,변수2,변수3...} : 벡터 생성 후 오른쪽 변수 값으로 초기화
// vector<자료형> 변수명[] = {{변수1,변수2},{변수3,변수4}} : 벡터 배열(2차원 벡터) 선언 및 초기화(열은 고정, 행은 가변)
// vector<vector<자료형>> 변수명 : 2차원 벡터 생성(열과 행 모두 가변)
// vector<자료형>변수명.assign(범위,초기화할 값) : 벡터의 범위 내에서 해당 값으로 초기화

int main() {
	vector<int> v; // int형 벡터 생성
	vector<int> v1(4); // int형 벡터 생성 후 크기를 4로 할당(모든 벡터요소 0으로 초기화)
	vector<int> v2 = { 1,2,3 }; // int형 벡터 생성 후 1,2,3으로 초기화
	vector<int> v3[] = { {1,2},{3,4} }; // int형 벡터 배열 생성(행은 가변이지만 열은 고정)
	vector<vector<int>> v4; // 2차원 벡터 생성(행과 열 모두 가변)
	vector<int> v5 = { 1, 2, 3, 4, 5 };        //백터 범위를 5로 지정하고 정수 10으로 초기화
	v5.assign(5, 10);    //output : 10 10 10 10 10
	return 0;
}