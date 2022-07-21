#include <iostream>

using namespace std;


int main() {
	int row, col;
	cin >> row;
	cin >> col;

	for (int i = row; i > 0; i--) {
		for (int j = 1; j < col; j++) {
			if (i > j)
				cout << "              ";
			else
				cout << "  " << i * 100 +( j-i+1);
			}
		cout << endl;
	}



	return  0;
}