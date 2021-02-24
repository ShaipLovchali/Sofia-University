#include <iostream>


void decToBinary(int number) {
	int binary[256] = {};
	int i = 0;
	while (number != 0) {
		binary[i] = number % 2;
		number /= 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		std::cout << binary[j];
	}
}

int main()
{
	decToBinary(10);
}
