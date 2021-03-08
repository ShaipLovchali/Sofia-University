#include <iostream>

struct Product {
	char description[32];
	int partNum;
	double cost;
};

int main()
{
	Product prod1;
	Product prod2;

	strcpy_s(prod1.description, "screw driver");
	strcpy_s(prod2.description, "hammer");

	prod1.partNum = 456;
	prod2.partNum = 324;

	prod1.cost = 5.50;
	prod2.cost = 8.2;

	/*std::cout << "Product 1" << std::endl;
	std::cout << "Description: " << prod1.description << std::endl;
	std::cout << "Part Num: " << prod1.partNum << std::endl;
	std::cout << "Cost: " << prod1.cost<< std::endl;

	std::cout << "Product 2" << std::endl;
	std::cout << "Description: " << prod2.description << std::endl;
	std::cout << "Part Num: " << prod2.partNum << std::endl;
	std::cout << "Cost: " << prod2.cost << std::endl;*/

	Product arrOfProducts[5];

	for (int i = 0; i < 5; i++)
	{
		strcpy_s(arrOfProducts[i].description, "");
		arrOfProducts[i].partNum = 0;
		arrOfProducts[i].cost = 0;
	}

	strcpy_s(arrOfProducts[0].description, "screw driver");
	arrOfProducts[0].partNum = 456;
	arrOfProducts[0].cost = 5.50;

	strcpy_s(arrOfProducts[1].description, "hammer");
	arrOfProducts[1].partNum = 324;
	arrOfProducts[1].cost = 8.20;

	strcpy_s(arrOfProducts[2].description, "socket");
	arrOfProducts[2].partNum = 777;
	arrOfProducts[2].cost = 6.80;

	strcpy_s(arrOfProducts[3].description, "plier");
	arrOfProducts[3].partNum = 123;
	arrOfProducts[3].cost = 10.80;

	strcpy_s(arrOfProducts[4].description, "hand-saw");
	arrOfProducts[4].partNum = 555;
	arrOfProducts[4].cost = 12.80;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Product " << i + 1 << std::endl;
		std::cout << "Description: " << arrOfProducts[i].description << std::endl;
		std::cout << "Part Num: " << arrOfProducts[i].partNum << std::endl;
		std::cout << "Cost: " << arrOfProducts[i].cost << std::endl;
	}
}

