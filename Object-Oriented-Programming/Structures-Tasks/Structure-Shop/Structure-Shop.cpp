#include <iostream>

struct Shop {
	int candyCount;
	int saltinesCount;
	int wafflesCount;
	int bottlesRussianVodkaCount;
};

void buy(Shop shop, char* name, int count) {
	if (strcmp("candy", name) == 0) {
		if (count <= shop.candyCount) {
			std::cout << "You have bought " << count << " candy's from our shop." << std::endl;
		}
		else {
			std::cout << "The shop has less than " << count << " candy's. We are sorry." << std::endl;
		}
	}
	else if (strcmp("saltines", name) == 0) {
		if (count <= shop.saltinesCount) {
			std::cout << "You have bought " << count << " saltineses from our shop." << std::endl;
		}
		else {
			std::cout << "The shop has less than " << count << " saltineses. We are sorry." << std::endl;
		}
	}
	else if (strcmp("waffles", name) == 0) {
		if (count <= shop.wafflesCount) {
			std::cout << "You have bought " << count << " waffles from our shop." << std::endl;
		}
		else {
			std::cout << "The shop has less than " << count << " waffles. We are sorry." << std::endl;
		}
	}
	else if (strcmp("vodka", name) == 0) {
		if (count <= shop.bottlesRussianVodkaCount) {
			std::cout << "You have bought " << count << " bottles of vodka from our shop." << std::endl;
		}
		else {
			std::cout << "The shop has less than " << count << " bottles of vodka. We are sorry." << std::endl;
		}
	}
}

int main()
{
	Shop shop1;
	shop1.candyCount = 2;
	shop1.saltinesCount = 4;
	shop1.wafflesCount = 5;
	shop1.bottlesRussianVodkaCount = 1;

	char* name = new char[32];
	int numberOfThingsToBuy;

	std::cin >> name >> numberOfThingsToBuy;

	buy(shop1, name, numberOfThingsToBuy);
	delete[] name;
}
