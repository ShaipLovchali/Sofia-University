#include <iostream>

const int MAX_SIZE = 256;

int charCount(char* str, char symbol) {
	int count = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == symbol) {
			count++;
		}
	}
	return count;
}

char getFirstUniqueChar(char* str) {
	for (int i = 0; str[i] != '\0' ;i++)
	{
		char currentChar = str[i];

		if (charCount(str, currentChar) == 1) {
			return currentChar;
		}
	}
	return '0';
}

int main()
{ 
	char str[MAX_SIZE];
	std::cin >> str;

	std::cout << (getFirstUniqueChar(str));
}