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

void swap(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}
void reverseStr(char* str) {
	int length = len(str);

	for (int i = 0; i < length / 2; i++)
	{
		swap(str[i], str[length - i - 1]);
	}
	// desserts
}

int main()
{
	char str[MAX_SIZE];
	std::cin >> str;

	reverseStr(str);

	std::cout << str;
}