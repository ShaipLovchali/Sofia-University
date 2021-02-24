#include <iostream>
using namespace std;

int main()
{
	double xCoordinate, yCoordinate;
	cout << "x = ";
	cin >> xCoordinate;
	cout << "y = ";
	cin >> yCoordinate;

	if (xCoordinate == 0 || yCoordinate == 0) {
		cout << "On axis" << endl;
	}
	else if (xCoordinate > 0 && yCoordinate > 0) {
		cout << "First";
	}
	else if (xCoordinate > 0 && yCoordinate < 0) {
		cout << "Fourth";
	}
	else if (xCoordinate < 0 && yCoordinate > 0) {
		cout << "Second";
	}
	else {
		cout << "Third";
	}
}
