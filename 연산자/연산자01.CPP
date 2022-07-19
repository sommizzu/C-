#include <iostream>

using namespace std;

int main()
{
	int coin[5] = { 500,100,50,10,1 };
	int coin_cnt[5] = { 0,0,0,0,0 };

	int input;
	cin >> input;

	for(int i = 0; i < 5; i++)
	{
		coin_cnt[i] = input / coin[i];
		input -= coin[i] * coin_cnt[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << coin_cnt[i] << " ";
	}



	return 0;
}