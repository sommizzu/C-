#include <iostream>

using namespace std;


struct abc {
	int a;
	double b;
	//struct xyz d1;
	struct xyz {
		int a;
		double b;
	} data2;
};

int main( ) {
	struct abc data1 = { 1, 5.6, {11, 111.99} }; 
	cout << data1.a << " " << data1.b << endl;
	cout << data1.data2.a << " " << data1.data2.b << endl;
	return 0;
}