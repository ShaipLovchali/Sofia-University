#include <iostream>

const int MAX_SIZE = 256;

void readArr(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void santa(int houses, int* chimneys, double abdominalCircumference, int* result) {
	int visitedHouses = 0;
	int foodConsumed = 0;

	abdominalCircumference = abdominalCircumference * 2 + houses * 0.5;

	for (int i = 0; i < houses; i++)
	{
		if (abdominalCircumference <= chimneys[i]) { 
			visitedHouses++;
			foodConsumed += 20;
		}
	}

	result[0] = visitedHouses;
	result[1] = foodConsumed;
}

int main()
{
	int houses;
	std::cin >> houses;
	int chimneys[MAX_SIZE];

	readArr(chimneys, houses);

	double abdominalCircumference; // radius
	std::cin >> abdominalCircumference;

	int result[2];

	santa(houses, chimneys, abdominalCircumference, result);

	std::cout << result[0] << " " << result[1] << std::endl;
}
