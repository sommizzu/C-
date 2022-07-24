#include <iostream>

using namespace std;
 

//global variable
//local variable

int gv = 99;

void f1() {
	int x = 6;
	cout << " f1 : " << ++x << endl;
	cout << " f1 : " <<++gv << endl;
}

	int main() {
		f1();
		cout << "main" << endl;
		cout << "main" << gv <<endl;
	
	return 0;
}