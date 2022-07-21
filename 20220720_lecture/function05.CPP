#include <iostream>

using namespace std;

void f_CallByValue(int fx) { cout << "F1 : " << fx << endl; fx = 1234;  }
void f_CallByValue(int* fp1) { cout << "F2 : " << *fp1 << endl; *fp1 = 1234; }

int main() {

	int mx = 99;
	f_CallByValue(mx);
	cout << "Main : "<< mx << endl;

	int mx2 = 99;
	f_CallByValue(mx2);
	cout << "Main : " << mx2 << endl;              








	return 0;