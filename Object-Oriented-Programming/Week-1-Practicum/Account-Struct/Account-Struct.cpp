#include <iostream>

//struct Account {
//	const char* name;
//	int age;
//	double balance;
//	bool hasCreditStory;
//
//	Account() {
//		this->name = new char[32];
//		this->name = "name is undefined";
//		this->age = 0;
//		this->balance = 0;
//		this->hasCreditStory = false;
//	}
//
//	void printAccount() {
//		std::cout << name << std::endl;
//		std::cout << age << std::endl;
//		std::cout << balance << std::endl;
//		std::cout << std::boolalpha << hasCreditStory << std::endl;
//	}
//};


struct pointXAndPointY {
	double x;
	double y;

	pointXAndPointY() : x(0), y(0) {

	}
};

int determineQuadrant(pointXAndPointY& currentPoints) {
	if (currentPoints.x > 0 && currentPoints.y > 0) {
		return 1;
	}
	else if (currentPoints.x < 0 && currentPoints.y > 0) {
		return 2;
	}
	else if (currentPoints.x < 0 && currentPoints.y < 0) {
		return 3;
	}
	else if (currentPoints.x > 0 && currentPoints.y < 0) {
		return 4;
	}
}

int main()
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		pointXAndPointY currentPoints;

		std::cin >> currentPoints.x;
		std::cin >> currentPoints.y;

		int quadrant = determineQuadrant(currentPoints);
		std::cout << "Points (" << currentPoints.x << ", " << currentPoints.y << ") -> " << quadrant << std::endl;
	}
}
