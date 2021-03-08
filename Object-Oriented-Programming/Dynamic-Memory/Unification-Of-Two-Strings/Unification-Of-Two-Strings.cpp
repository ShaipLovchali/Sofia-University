#include <iostream>

bool hasChar(const char* str, char a) {
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == a) {
			return true;
		}
	}
	return false;
}

char* unificationOfTwoStrings(const char* str1, const char* str2) {
	char* unification = new char[64];

	int index = 0;
	for (int i = 0; str1[i] != '\0'; i++)
	{
		if (!hasChar(unification, str1[i])) {
			unification[index] = str1[i];
			index++;
		}
	}

	for (int i = 0; str2[i] != '\0'; i++)
	{
		if (!hasChar(unification, str2[i])) {
			unification[index] = str2[i];
			index++;
		}
	}

	unification[index] = '\0';
	return unification;
}

int main()
{
	char* str1 = new char[32];
	char* str2 = new char[32];
	std::cin >> str1 >> str2;

	char* unification = unificationOfTwoStrings(str1, str2);

	std::cout << unification << std::endl;

	delete[] str1;
	delete[] str2;
	delete[] unification;
}
