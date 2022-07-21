#include <iostream>
using namespace std;

void f1(int *p1){cout << *p1 << "   " << *(p1+2) << endl;}
void f2(int (*p)[2]){cout << **p << endl;} // 원포인트로 한번 받으면, 11,22  배열로 보고, 두번 들어가면 원소를 볼 수 있음 

int main() {
	int a1[5] = {10,20,30,40,50};
	f1(a1);

	int a2[3][2] = {{11,22},{33,44},{55,66}};
	f2(a2);

	return 0;
}

//배열 던지는것, 배열 포인터 함수에 배열을 던질떄, 함수원형이 다오면 포인ㄴ터로 받는것이 유리함.






	return 0;