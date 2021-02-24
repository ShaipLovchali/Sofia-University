#include <iostream>
using namespace std;

const int SIZE = 256;
int main()
{
	int matrix[SIZE][SIZE] = {};
	int tMatrix[SIZE][SIZE] = {};

	int n, m;
	cin >> n >> m;

	// 1 2 3 5
	// 6 7 8 9
	// 10 11 12 13

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			tMatrix[j][i] = matrix[i][j];
		}
	}

	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << tMatrix[i][j] << " ";
		}
		cout << endl;
	}
}
