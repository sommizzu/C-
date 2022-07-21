#include <iostream>

using namespace std;


int main() {
	int x = 10;
	int& y = x; //x의 별명을 하나 더 만드는 것 //이름만 두개로 바꾸는 방법 

	cout << x << "  " << y << endl;
	cout << &x << "  " << &y << endl; //값, 주소값 모두 동일하게 나온다.


	return 0;
} ////C언어에는 없는 기능