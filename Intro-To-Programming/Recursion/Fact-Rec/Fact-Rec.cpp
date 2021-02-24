// Fact-Rec.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fact(n - 1);
}

int main()
{
	std::cout << fact(5);
}
