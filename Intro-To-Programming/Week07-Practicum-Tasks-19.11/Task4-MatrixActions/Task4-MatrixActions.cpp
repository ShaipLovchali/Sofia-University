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

	int sum = 0;
	bool isValid = true;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == j) {
				if (matrix[i][j] % 3 != 0) {
					isValid = false;
				}
				sum += matrix[i][j] / 3;
			}
			else if (i < j) {
				if (matrix[i][j] % 4 != 0) {
					isValid = false;
				}
				sum += matrix[i][j] / 4;
	
			}
			else if (i > j) {
				if (matrix[i][j] % 2 != 0) {
					isValid = false;
				}
				sum += matrix[i][j] / 2;
				
			}
		}
	}

	if (isValid) {
		cout << sum << endl;
	}
	else {
		cout << "Elements does not meet the requirements.";
	}
	return 0;
}
