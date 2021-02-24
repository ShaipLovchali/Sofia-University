#include <iostream>
using namespace std;

const int SIZE = 256;
int main()
{
	int matrix[SIZE][SIZE] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// 00 01 02 03
	// 10 11 12 13
	// 20 21 22 23
	// 30 31 32 33


	// main diagonal -> i == j
	// below main diagonal -> i > j
	// above main diagonal -> i < j

	// second diagonal -> i + j == n - 1
	// below second diagonal -> i + j >= n
	// above second diagonal -> i + j <= n - 2

	// sum of number on main diagonal 
	int sum = 0;

	/*for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (i == j) {
				sum += matrix[i][j];
			}
		}
	}*/
	
	// sum of numbers on second diagonal
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (i + j == 2) {
				sum += matrix[i][j];
			}
		}
	}
	cout << sum << endl;
}
