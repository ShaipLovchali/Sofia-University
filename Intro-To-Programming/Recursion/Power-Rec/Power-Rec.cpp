#include <iostream>

double power(double num, int exp) {
	if (exp == 1) {
		return num;
	}
	if (exp < 0) {
		return 1.0 / power(num, -exp);
	}
	return num * power(num, exp - 1);
}

int main()
{
	std::cout << power(2, -10);
}
