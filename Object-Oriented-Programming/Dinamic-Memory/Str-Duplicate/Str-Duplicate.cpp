#include <iostream>

char* strDuplicate(char* str) {
	char* duplicate = new char[32];

	for (int i = 0; str[i] != '\0'; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[strlen(str)] = '\0';
	return duplicate;
}

int main()
{
	char str[] = "Hello";
	
	char* duplicate = strDuplicate(str);
	std::cout << duplicate;

	delete duplicate;
}