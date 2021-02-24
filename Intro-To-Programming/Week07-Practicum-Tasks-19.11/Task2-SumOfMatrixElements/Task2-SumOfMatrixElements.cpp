// Task2-SumOfMatrixElements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 256;
int main()
{
    int matrix[SIZE][SIZE] = {};

	int n;
	double sum = 0;
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			int currElement;
			cin >> currElement;
			matrix[i][j] = currElement;
			sum += currElement;
		}
	}

	cout << sum << " " <<setprecision(2)<< sum / (n * n);
}
