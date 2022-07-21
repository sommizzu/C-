#include <iostream>
using namespace std;

void f1(int *p1){
	cout << *p1 << "   " << *(p1+2) << endl;

}

int main() {

	int a1[5] = {10,20,30,40,50};
	f1(a1);

	return 0;
}

//배열 던지는것, 배열 포인터 함수에 배열을 던질떄, 함수원형이 다오면 포인ㄴ터로 받는것이 유리함. 








	return 0;