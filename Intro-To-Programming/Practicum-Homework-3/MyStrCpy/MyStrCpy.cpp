#include <iostream>

const int MAX_SIZE = 256;

void myStrCpy(char* source, char* destination) {
	int count = 0;

	for (int i = 0; source[i] != '\0'; i++)
	{
		destination[count] = source[i];
		count++;
	}
	destination[count] = '\0';
}

int main()
{
	char source[MAX_SIZE], destination[MAX_SIZE];;
	std::cin >> source;

	myStrCpy(source, destination);

	std::cout << destination;
}
