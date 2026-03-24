#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : Point(0, 0) {}  /*Point(int a, int b) 생성자 호출, 위임 생성자*/

Point::Point(int a, int b) : x(a), y(b) {}  /*객체 초기화를 전담하는 타겟 생성자*/

int main()
{
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}