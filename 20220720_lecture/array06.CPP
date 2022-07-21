 #include <iostream>

using namespace std;


int main() {
	int array2[2][3] = { 10, 20, 30, 40, 50, 60 }; //20을찍고 싶어 1번째 원소, array2로만 봤을때, 1 10,20,30 2 40,50,60
	int a[2][3] = { {10,20},{30,40} };

	cout << a[4][0] << endl;

	cout << array2 << "  " << *array2 << endl;
	cout << *array2 << "  " << **array2 << endl;
	cout << *(*(array2 + 0) + 1) << "  " << *(*(array2 + 1) + 1) << endl;

	int* p1 = *array2;
	cout << *p1 << "  " << *(p1 + 1) << "  " << *(p1 + 4) << endl;
	cout << p1[0] << endl;
	// int *p2[3] = array2;
	int (*p2)[3] = array2;
	cout << *((*p2) + 1) << "  " << *( * (p2 + 1) + 1) << endl; //20,50
  cout << (*p2)[1] << "  " << (*p2)[4] << endl; // 배열 인덱스 개념으로 사용 

	return 0;
} // 표시 된 것 작업을 거친 후, 어떤 차원 의 배열이든 1차원 배열 처럼 사용할 수 있다.