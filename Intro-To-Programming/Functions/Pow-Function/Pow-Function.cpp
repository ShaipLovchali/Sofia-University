#include <iostream>

int myPow(int number, int power) {
	int result = 1;

	for (int i = 0; i < power; i++)
	{
		result *= number;
	}
	return result;
}

int main()
{
	std::cout << myPow(5, 3);
}
