#include <iostream>
using namespace std;

int main()
{
	int turtlesFood, catsFood;
	cin >> turtlesFood >> catsFood;

	double turtlesFoodPrice = turtlesFood * 2.5;
	double catsFoodPrice = catsFood * 4;

	cout << turtlesFoodPrice + catsFoodPrice << " lv." << endl;
}
