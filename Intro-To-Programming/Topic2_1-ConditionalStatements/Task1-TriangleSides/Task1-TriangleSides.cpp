// Task1-TriangleSides.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double sideAC, sideBC, sideAB;

	cin >> sideAC >> sideBC >> sideAB;

	// 3 4 5
	bool canFormATriangle = sideAC < (sideBC + sideAB) && 
		sideBC < (sideAC + sideAB) && 
		sideAB < (sideAC + sideBC);

	double sideAC2 = sideAC * sideAC, sideBC2 = sideBC * sideBC, sideAB2 = sideAB * sideAB;

	if (canFormATriangle) {
		if (sideAC2 == sideBC2 + sideAB2 ||
			sideBC2 == sideAC2 + sideAB2 ||
			sideAB2 == sideAC2 + sideBC2) {
			cout << "Right-angled family";
		}
		else if (sideAC2 + sideBC2 > sideAB2 &&
			sideBC2 + sideAB2 > sideAC2 &&
			sideAB2 + sideAC2 > sideBC2) {
			cout << "Acute-angled family";
		}
		else {
			cout << "Obtuse-angled family";
		}
	}
	else {
		cout << "Invalid sides!";
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
