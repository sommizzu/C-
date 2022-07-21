#include <iostream>

using namespace std;

void f1();
void f2(int x);

int main() {


	f1();

	return 0;
}

void f1() {
	cout << "F1" << endl;
}

void f2(int x) {
	cout << "F2" << "   " << x << endl;
}