#include <iostream>

void printSpaces(int spaces) {
	for (int i = 0; i < spaces; i++)
	{
		std::cout << " ";
	}
}

void printStars(int stars) {
	for (int i = 0; i < stars; i++)
	{
		std::cout << "*";
	}
}

void printChristmasTree(int n) {
	for (int i = 0; i < n + 1; i++)
	{
		printSpaces(n - i);

		printStars(i);

		std::cout << "|";
		
		printStars(i);

		std::cout << std::endl;

		// Понеже не съм сигурен, дали трябва като на картинката да има нов ред след всяка итерация и в случай, че има добавяме:
		//std::cout << std::endl;
	}
}

int main()
{
	int n;
	std::cin >> n;

	printChristmasTree(n);
}

