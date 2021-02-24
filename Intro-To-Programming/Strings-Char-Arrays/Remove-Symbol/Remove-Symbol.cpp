#include <iostream>

const int MAX_SIZE = 256;

int len(char* str) {
	int len = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return len;
}

void removeSymbol(char* str, char symbol) {
	int length = len(str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		char currentChar = str[i];

		if (currentChar == symbol) {
			for (int j = i; j < length - 1; j++)
			{
				str[j] = str[j + 1];
			}
			str[length - 1] = '\0';
		}
	}
	// strsing s
}

int main()
{
	char string[MAX_SIZE];
	std::cin >> string;

	char symbol;
	std::cin >> symbol;

	removeSymbol(string, symbol);
	std::cout << string;
}
