#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

/*전역 객체 생성*/
Circle globalDonut(1000);
Circle globalPizza(2000);

/*지역 객체 생성*/
void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

/*지역객체 생성*/
int main()
{
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}