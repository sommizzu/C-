#include <iostream>

using namespace std;
 
int main() {
	int a = 10;
	int* p = &a;
	cout << a << "  " << *p << endl;

	return 0;
} //프로그램 메모리 남을 가능성 100% - 동적메모리 - 쓰고 싶을떄 차용해서 쓰는것, a랑 p반환할방법 X, 계속해서 가지고 잇는다. 