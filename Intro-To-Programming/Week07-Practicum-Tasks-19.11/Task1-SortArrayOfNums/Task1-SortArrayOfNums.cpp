#include <iostream>
#define SIZE 256
using namespace std;

int main()
{
	int numberArray[SIZE] = {};

	int n;
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> numberArray[i];
	}

	// selection sort
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = i + 1; j < n; j++)
		{
			if (numberArray[i] > numberArray[j]) {
				int temp = numberArray[i];
				numberArray[i] = numberArray[j];
				numberArray[j] = temp;
			}
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		cout << numberArray[i] << " ";
	}

}
