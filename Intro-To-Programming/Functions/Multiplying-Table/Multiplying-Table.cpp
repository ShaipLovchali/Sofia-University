#include <iostream>

void printMultiplyingTable() {
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			std::cout << j << "*" << i << "=" << j * i << "    ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	printMultiplyingTable();
}
