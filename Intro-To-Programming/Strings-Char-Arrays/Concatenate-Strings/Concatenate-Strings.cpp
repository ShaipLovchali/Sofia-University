#include <iostream>
const int MAX_SIZE = 256;

void concat(char* str1, char* str2, char* concatenated) {
	int counter = 0;
	for (int i = 0; str1[i] != '\0'; i++)
	{
		concatenated[counter] = str1[i];
		counter++;
	}

	for (int i = 0; str2[i] != '\0'; i++)
	{
		concatenated[counter] = str2[i];
		counter++;
	}
	concatenated[counter] = '\0';
}

int main()
{
	char str1[MAX_SIZE], str2[MAX_SIZE], concatenated[MAX_SIZE];
	std::cin >> str1 >> str2;

	concat(str1, str2, concatenated);

	std::cout << concatenated;
}

