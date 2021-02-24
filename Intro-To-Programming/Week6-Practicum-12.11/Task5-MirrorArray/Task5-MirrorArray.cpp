#include <iostream>
using namespace std;

const int MAX = INT16_MAX;
int main()
{
	int arrayOfNums[MAX] = {};

	int n;
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		int currNum;
		cin >> currNum;
		arrayOfNums[i] = currNum;
	}

	bool mirrored = true;
	for (size_t i = 0; i < n / 2; i++)
	{
		if (arrayOfNums[i] != arrayOfNums[n - 1 - i]) {
			mirrored = false;
			break;
		}
	}

	cout << boolalpha << mirrored;
}
