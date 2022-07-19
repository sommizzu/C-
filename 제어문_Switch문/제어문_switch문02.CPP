#include <iostream>

using namespace std;

int main()
{
	int input;
	cin >> input;

	switch (input / 10) {
	case 10: case 9:
		cout << "A";
		break;
	case 8:
		cout << "B";
		break;
	case 7:
		cout << "C";
		break;
	case 6:
		cout << "D";
		break;
	case 5:
		cout << "F";
		break;
	deafult:
		cout << "F";
		}
	

	return 0;
}
