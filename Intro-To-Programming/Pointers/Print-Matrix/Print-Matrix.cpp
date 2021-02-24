#include <iostream>

const int MAX_SIZE = 256;

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> *(*(matrix + i) + j);
		}
	}
}

void printMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << *(*(matrix + i) + j) << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int rows, cols;
	std::cin >> rows >> cols;

	int matrix[MAX_SIZE][MAX_SIZE] = {};

	inputMatrix(matrix, rows, cols);
	
	printMatrix(matrix, rows, cols);
}
