#include <iostream>

using namespace std;


class Circle {
public:
	int radius;
	Circle(); //매개변수 없는 생성자
	Circle(int r);//매개변수 있는 생성자
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름" << radius << "원 생성" << endl;
}
// int main()
//Circle donut;
//double area = donut.getArea();
//cout<<"donut면적은"<<are<<endl;

Circle::Circle(int r) {
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}

//Circle pizza(30);
//area =  pizza.getArea();
//cout<<"donut면적은"<<are<<endl;
double Circle::getArea() {
	return 3.14 * radius * radius;
}