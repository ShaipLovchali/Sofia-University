#include <iostream>
using namespace std;

int main()
{
	double sideA, sideB, sideC;
	cin >> sideA;
	cin >> sideB;
	cin >> sideC;

	bool isValid = (sideA < sideB + sideC) && (sideB < sideA + sideC) && (sideC < sideA + sideB);

	if (isValid) {
		cout << "Yes, you can make a triangle out of this :)";
	}
	else {
		cout << "No, you can't make a triangle out of this :(";
	}
}
