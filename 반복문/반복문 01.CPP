#include <iostream>

using namespace std;

int main()
{
	int input;

	while(true) {
		cin >> input;
		if (input == 0 || input == 1) {
			break;
		}
		int cnt = 0;
		for (int i = 1; i <= input; i++) {
			if (input % i == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			cout << "Prime Number" << endl;
		}
		else {
			cout << "No Prime Number" << endl;
		}
	}

	return 0;
}