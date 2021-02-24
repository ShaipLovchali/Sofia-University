
#include <iostream>
#define SIZE 256
using namespace std;

int main()
{
	int matrix[SIZE][SIZE] = {};

	int n, m;
	cin >> n >> m;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int maxElement = INT32_MIN;
	int minElement = INT32_MAX;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (matrix[i][j] < minElement) {
				minElement = matrix[i][j];
			}
			if (matrix[i][j] > maxElement) {
				maxElement = matrix[i][j];
			}
		}
	}


	cout << minElement << endl;
	cout << maxElement;
	return 0;
}
