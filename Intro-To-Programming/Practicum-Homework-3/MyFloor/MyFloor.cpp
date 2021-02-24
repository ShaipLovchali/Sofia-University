#include <iostream>

int myFloor(double num) {
	if (num < 0) {
		if (num == (int)num) {
			return (int)num;
		}
		return (int)num - 1;
	}
	return (int)num;
}

int main()
{
	double number;
	std::cin >> number;

	std::cout << myFloor(number);
}

