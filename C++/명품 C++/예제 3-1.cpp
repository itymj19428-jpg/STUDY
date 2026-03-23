#include <iostream>
using namespace std;

//Circle 선언부
class Circle {
public : 
	int radius;
	double getArea();
};

//Circle 구현부
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;  //객체 donut 생성
	donut.radius = 1;  //donut 객체의 반지름을 1로 설정(donut의 멤버 변수 접근)
	double area = donut.getArea();  //donut 객체의 면적 알아내기(donut 멤버 함수 호출)
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;  //pizza 객체의 반지름을 30으로 설정
	area = pizza.getArea();  //pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;
}