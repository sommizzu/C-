#include <iostream>

using namespace std;


int main() {
	int x = 10;
	int& y = x; 


	cout << x << "  " << y << endl;
	cout << &x << "  " << &y << endl; 

	const int z1 = 10; 
	//z1 = 20;

	int z0 = 100;
	const int* z2 = &z0
		z2 = &z1;
	//*z2 = 99;
	const int* const z3 = &z0; // 가장 가까운거 하나

	cout << z1 << endl;

	return 0;
} //reference