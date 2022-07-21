#include <iostream>

using namespace std;

void f_CallByValue(int fx) { cout << "f1 : " << fx << endl; fx = 1234;  }
void f_CallByValue(int* fp1) { cout << "F2 : " << *fp1 << endl; *fp1 = 1234; }
void f_CallByReference(int& fr1) { cout << "F3 : " << fr1 << endl; fr1 = 9876987; }

int main() {

	int mx = 99;
	f_CallByValue(mx);
	cout << "Main : "<< mx << endl;

	int mx2 = 99;
	f_CallByValue(mx2);
	cout << "Main : " << mx2 << endl;

	//callbyreference
	int mx3 = 999;
	f_CallByReference(mx3);
	cout << "Main3 : " << mx3 << endl;
//cout << fr1 << endl;


	return 0;
}        








	return 0;