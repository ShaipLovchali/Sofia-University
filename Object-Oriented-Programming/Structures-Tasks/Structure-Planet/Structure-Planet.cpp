#include <iostream>

struct Planet {
	char name[32];
	double distanceToSun;
	double diametre;
	double mass;

};

void inputPlanet(Planet& planet) {
	std::cin >> planet.name;
	std::cin >> planet.distanceToSun;
	std::cin >> planet.diametre;
	std::cin >> planet.mass;
}

void outputPlanet(Planet planet) {
	std::cout << planet.name << std::endl;
	std::cout << planet.distanceToSun << std::endl;
	std::cout << planet.diametre << std::endl;
	std::cout << planet.mass << std::endl;
}

int secondsNeededFromSunToPlanet(Planet planet) {
	const int lightSpeed = 299792;

	return planet.distanceToSun / lightSpeed;
}

void printLargestDiametrePlanet(Planet* planets) {
	Planet largest = planets[0];
	for (int i = 0; i < 2; i++)
	{
		if (planets[i].diametre > largest.diametre) {
			largest = planets[i];
		}
	}

	outputPlanet(largest);
}

int main()
{
	Planet planet;

	/*inputPlanet(planet);
	outputPlanet(planet);

	std::cout << secondsNeededFromSunToPlanet(planet);*/

	Planet planets[2];

	for (int i = 0; i < 2; i++)
	{
		inputPlanet(planets[i]);
	}

	/*for (int i = 0; i < 2; i++)
	{
		outputPlanet(planets[i]);
	}*/

	printLargestDiametrePlanet(planets);
}

