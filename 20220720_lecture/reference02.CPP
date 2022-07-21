#include <iostream>

using namespace std;


int main() {
	int x = 10;
	int& y = x; 

	int& z = 5; //원본 있는 이름의 별명을 만드는 방식

	cout << x << "  " << y << endl;
	cout << &x << "  " << &y << endl; 


	return 0;
} //reference 