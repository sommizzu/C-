#include <iostream>

using namespace std;

int main() {
	int array2[2][3] = { 10, 20, 30, 40, 50, 60 }; //20을찍고 싶어 1번째 원소, array2로만 봤을때, 1 10,20,30 2 40,50,60

	cout << array2 << "  " << *array2 << endl;
	cout << * array2 << "  " <<  **array2 << endl;
	cout << *( * (array2 + 0) + 1) << "  " <<  * (*(array2 + 1) + 1)  << endl;

	return 0;
} //자기 차원의 주소값만 본다는 것을 알 수있음.