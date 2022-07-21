#include <iostream>

using namespace std;

void f1();
void f2(int x);
int f3();
int f4(int y);

int main() {
	int result;

	f1();
	f2(18);
	result = f3();
	cout << "Main  : " << result << endl;
	result = f4(9);
	cout << "Main  : " << result << endl;

	return 0;
}

void f1() { cout << "F1" << endl; }
void f2(int x) {    cout << "F2" << "    " << x <<  endl; }
int f3() {cout << "F3" << endl; return 9999;}
int f4(int y) { cout << "F4 : " << endl; return y * 999; }