#include <iostream>

double myPow(double number, double exponent) {
	double sum = 1;
	if (exponent < 0) {
		for (int i = 0; i < -exponent; i++)
		{
			sum /= number;
		}
	}
	for (int i = 0; i < exponent; i++)
	{
		sum *= number;
	}
	return sum;

}

int main()
{
	double number, exponent;
	std::cin >> number >> exponent;

	std::cout << (myPow(number, exponent));
}