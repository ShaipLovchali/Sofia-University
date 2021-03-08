#include <iostream>

const size_t maxPower = 50;

struct Poly {
	double coeff[maxPower];
	size_t power;
};

void findFirstDiff(Poly poly) {
	int index = 0;
	for (int i = poly.power; i >= 0; i--)
	{
		poly.coeff[index] = poly.coeff[index] * i;
		index++;
	}

	for (int i = 0; i < poly.power; i++)
	{
		std::cout << poly.coeff[i] << std::endl;
	}
}

int main()
{
	Poly poly;
	// x^3 + 2x^2 + 5x^1
	// 2x^1 + 2
	poly.coeff[3];
	poly.coeff[0] = 3;
	poly.coeff[1] = 1;
	poly.coeff[2] = 4;

	poly.power = 3;

	findFirstDiff(poly);


}
