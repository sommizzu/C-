#include <iostream>

using namespace std;
 
//void f1() { cout << "test" << endl; } //인자 없음, 처리 할 수있는 방법 없음
//void f1(int x=10) { cout << "test2 : " << x << endl; }
void f1(int x=99, int y) { cout << "test3 : " << x <<" " <<y << endl;}

int main() {
	f1(5);
	f1(5, 6);

	return 0; //인자 있을때, 없을떄를 모두 책임지는 한가지 만들기
} //대다수 언어 사용 가능, 권장 하는 방법