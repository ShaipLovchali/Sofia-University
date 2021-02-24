#include <iostream>

int reverseNumber(int number) {
	int reversedNum = 0;

	while (number != 0) {
		reversedNum = reversedNum * 10 + number % 10;
		number /= 10;
	}
	return reversedNum;
}

int main()
{
	int numbers[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> numbers[i];
		std::cout << reverseNumber(numbers[i]) << " ";
	}
}

