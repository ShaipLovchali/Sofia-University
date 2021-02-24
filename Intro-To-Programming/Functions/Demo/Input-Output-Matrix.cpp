#include <iostream>

const int MAX_SIZE = 256;

void input(int matrix[][MAX_SIZE], int rows, int cols) {
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];	
		}
	}
}
void output(int matrix[][MAX_SIZE], int rows, int cols) {
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE] = { 0 };
	int rows, cols;

	std::cin >> rows >> cols;

	input(matrix, rows, cols);
	output(matrix, rows, cols);
}
