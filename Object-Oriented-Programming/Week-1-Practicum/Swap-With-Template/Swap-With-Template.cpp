#include <iostream>

template <typename T>

void swap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}

int main()
{
	char a = 'a';
	char b = 'b';

	swap(a, b);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}
