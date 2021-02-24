#include <iostream>

int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	return gcd(b, a % b);
}



int main()
{
	int a, b;
	std::cin >> a >> b;

	std::cout << gcd(a, b);
}

