#include <iostream>

bool isDigit(char symbol) {
	return symbol >= '0' && symbol <= '9' ? true : false;
}
int main()
{
	char symbol;
	std::cin >> symbol;

	std::cout << std::boolalpha << isDigit(symbol) << std::endl;
}