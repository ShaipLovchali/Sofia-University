// AdditionalExersices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{



	

	//const int size = 4;

	//for (int i = 2, k = 6; --k; i -= i || (i += size)) {
	//	cout << i + 1;
	//}



	/*double a, b;

	cin >> a >> b;

	int sumEvens = 0;
	for (int i = ceil(a); i <= floor(b); i++) {
		if (i / 10 % 10 == 7) {
			cout << i << endl;
		}
		if (i % 2 == 0) {
			sumEvens += i * i;
		}
	}

	double average = sumEvens / 2.0;
	cout << average << endl;*/








	/*int day, month, year;

	cin >> day >> month >> year;

	bool isValid = true;

	if (day < 1 || month < 1 ||  month > 12) {
		isValid = false;
	}
	else {
		bool leapYear = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);

		int daysInMonth;

		switch (month) {
			case 2: daysInMonth = leapYear ? 29 : 28;
				break;
			case 4:
			case 6:
			case 9:
			case 11: daysInMonth = 30;
				break;
			default: 
				daysInMonth = 31;
				break;
		}

		if (day > daysInMonth) {
			isValid = false;
		}

		cout << (isValid ? "Valid input!" : "Invalid input") << endl;


	}*/


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
