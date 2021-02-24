#include <iostream>
#define SIZE 256
using namespace std;

int main()
{
	int matrix[SIZE][SIZE] = {};
	int n;
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int equals;
	bool find = false;
	for (size_t i = 0; i < n; i++)
	{
		bool isValid = true;
		for (size_t j = 0; j < n; j++)
		{
			if (matrix[i][j] == matrix[j][i] && isValid) {
				equals = i;
			}
			else {
				isValid = false;
				break;
			}
		}
		if (isValid) {
			cout << equals;
			find = true;
		}
	}

	if (!find) {
		cout << "There are no equal rows and cols";
	}
}