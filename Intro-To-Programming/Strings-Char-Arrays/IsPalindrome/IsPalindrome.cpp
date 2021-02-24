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

bool isPalindrome(char* str) {
	int length = len(str);
	for (int i = 0; i < length / 2; i++)
	{
		if (str[i] != str[length - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main()
{
	char str[MAX_SIZE];
	std::cin >> str;

	std::cout << std::boolalpha << (isPalindrome(str));
}
