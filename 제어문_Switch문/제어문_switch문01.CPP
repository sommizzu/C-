#include <iostream>

using namespace std;

int main()
{
	const int big_box_weight = 8;
	const int small_box_weight = 5;
	const int item_weight = 1;

	const int big_box_max = 10;
	const int small_box_max = 5;

	int big_box_cnt = 0;
	int small_box_cnt = 0;
	int total_weight = 0;
	int qu = 0;
	int re = 0;

	int input;
	cin >> input;

	qu = input / 10;
	if (qu != 0) {
		big_box_cnt = qu;
		total_weight = qu * (big_box_max * item_weight + big_box_weight);
	}

	re = input % 10;
	if (re >= 1 && re <= 5) {
		small_box_cnt++;
		total_weight += (re * item_weight + small_box_weight);
	}
	else {
		big_box_cnt++;
		total_weight += (re * item_weight + big_box_weight);
	}
	
	cout << big_box_cnt << endl << small_box_cnt << endl << total_weight;

	return 0;
}