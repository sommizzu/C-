#include <iostream>

using namespace std;

int main()
{
	while (true) {
		int input;
		cin >> input;
		if (input == 0) {
			break;
		}
		long long int sum = 1;
		long long int mul = 1;

		for (int i = 2; i <= input; i++) {
			sum += i;
			mul *= i;
		}
		cout << sum << " " << mul << endl;;
	}
	
	return 0;
}