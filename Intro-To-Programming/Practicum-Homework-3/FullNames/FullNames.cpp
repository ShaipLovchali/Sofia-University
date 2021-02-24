#include <iostream>

const int MAX_SIZE = 256;

void fillNames(char* names, char* fullNames, int& currentIndexCounter, int& mainCounter) {
	while (names[currentIndexCounter] != ' ' && names[currentIndexCounter] != '\0') {
		fullNames[mainCounter] = names[currentIndexCounter];
		mainCounter++;
		currentIndexCounter++;
	}
	fullNames[mainCounter] = ' ';
	mainCounter++;

	if (names[currentIndexCounter] == ' ') {
		currentIndexCounter++;
	}
}

void uniteNames(char* firstNames, char* lastNames, char* fullNames) {
	int counter = 0;
	
	int i = 0;
	int j = 0;

	while (firstNames[i] != '\0') {
		// функция, която ни записва текущото първо име в масива fullNames
		fillNames(firstNames, fullNames, i, counter);

		// функция, която ни записва текущата фамилия в масива fullNames
		fillNames(lastNames, fullNames, j, counter);
	}

	fullNames[counter] = '\0';
}

int main()
{
	char firstNames[MAX_SIZE], lastNames[MAX_SIZE], fullNames[MAX_SIZE];

	std::cin.getline(firstNames, MAX_SIZE);
	std::cin.getline(lastNames, MAX_SIZE);

	uniteNames(firstNames, lastNames, fullNames);
	std::cout << fullNames;
}