#include <iostream>

using namespace std;
 
int main() {
	int a = 10;
	int* p = &a;
	cout << a << "  " << *p << endl;

	int* p1 = new int; //p->새로운 메모리 공간.
	*p1 = a;
	*p1 += 10;
	cout << a << "  " << *p1 << endl;

	delete p1;

	int* p21 = new int(5);
	cout <<  *p2 << endl;
	delete p2;

	int* p3 = new int[10];
	for (int i = 0; i < 10; i++) *(p3 + i) = i + 1;
	cout << *(p3 + 5) << endl;
	delete p3;

	return 0;