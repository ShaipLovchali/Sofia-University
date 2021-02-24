#include <iostream>
#include <cstring>

const int MAX_SIZE = 256;

int length(char* str) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

int myStrCmp(char* str1, char* str2) {
	if (length(str1) < length(str2)) {
		return -1;
	}
	else if (length(str1) > length(str2)) {
		return 1;
	}

	for (int i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] < str2[i]) {
			return -1;
		}
		else if (str1[i] > str2[i]) {
			return 1;
		}
	}
	return 0;
}

int main()
{
	char str1[MAX_SIZE], str2[MAX_SIZE];
	std::cin >> str1 >> str2;

	std::cout << myStrCmp(str1, str2);
}
