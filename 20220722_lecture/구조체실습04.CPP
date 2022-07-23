#include <iostream>

using namespace std;


typedef struct  {
	int a;
	double b;
	char ch;
} xt1;

typedef struct  {
	int a;
	char ch;
	double b;
} xt2;

int main( ) {
	xt1 x1;
	xt2 x2;
	cout << sizeof(x1) << endl;
	cout << sizeof(x2) << endl;

	return 0;

}