#include <iostream>

using namespace std;

int main() {
	int total;
	int result500, result100, result50, result10;

	cin >> total;

	result500 = total / 500;
	total % = 500;

	result100 = total / 100;
	total % = 100;

	result50 = total / 50;
	total % = 50;

	result500 = total / 10;
	total % = 10;

	cout << result500 << "  " << result100 << "  " << result50 << "  " << result10 << endl;
}