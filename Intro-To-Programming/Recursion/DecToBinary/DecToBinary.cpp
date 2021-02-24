#include <iostream>

int decToBin(int num) {
	if (num <= 0) {
		return 0;
	}
	// 5 -> 101
	return num % 2 + 10 * decToBin(num / 2);
}

int main()
{
	int num;
	std::cin >> num;

	std::cout << decToBin(num);
}
