#include <iostream>

int len(int number) {
	int len = 0;

	while (number > 0) {
		len++;
		number /= 10;
	}

	return len;
}

char* numToStr(int number) {
	char* toStr = new char[32];
	int length = len(number);

	int i = length - 1;
	while (number > 0) {
		int currentDigit = number % 10;

		toStr[i] = currentDigit + '0';
		number /= 10;
		i--;
	}
	toStr[length] = '\0';

	return toStr;

}

int main()
{
	int number;
	std::cin >> number;

	char* toStr = numToStr(number);
	std::cout << toStr;

	delete toStr;
}