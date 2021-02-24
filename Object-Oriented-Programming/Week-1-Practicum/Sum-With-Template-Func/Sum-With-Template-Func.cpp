#include <iostream>

template <typename T>

T sum(T a, T b) {
	return a + b;
}

int main()
{
	std::cout << sum('0', '3');
}
