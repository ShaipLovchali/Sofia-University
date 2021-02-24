#include <iostream>

int myAbs(int n) {
	return n < 0 ? -n : n;
}

int myRound(double num) {
	int numAfterFloatingPoint = (int)(num * 10) % 10;

	if (myAbs(numAfterFloatingPoint) < 5) {
		return (int)num;
	}
	if (numAfterFloatingPoint < 0) {
		return (int)(num - 1);
	}
	return (int)(num + 1);
}

int main()
{
	double number;
	std::cin >> number;

	std::cout << myRound(number);
}
