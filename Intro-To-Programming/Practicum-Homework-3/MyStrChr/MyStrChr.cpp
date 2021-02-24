#include <iostream>

const int MAX_SIZE = 256;

int len(char* str) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

char* myStrChr(char* str, char character) {
	int length = len(str);
	for (int i = length; i >= 0; i--)
	{
		if (str[i] == character) {
			return str + i;
		}
	}
	return nullptr;
}

int main()
{
	char str[MAX_SIZE];
	char character;
	std::cin >> str >> character;

	std::cout << myStrChr(str, character);
}
