#include <iostream>

using namespace std;

class point {
private:int x; int y;
public:
	void setPoint ( int x , int y ) { this->x = x; this->y = y; }
	void coutPoint() { cout << x << "  " << y << endl; }
};
	
class colorPoint : public point {
private: string  color;
public:
	void setColorPoint(string color) { this->color = color; }
	void coutColorPoint() { cout << color << endl; }
};

int main() {
	point* p = new point();
	p->setPoint(99, 88);
	p->coutPoint();
	delete p;

	colorPoint* p1 = new colorPoint();
	p1->setPoint(111, 222);
	p1->setColorPoint("Deep Blue");
	p1->coutPoint();
	p1->coutColorPoint();
	delete p1;
	return 0;
}