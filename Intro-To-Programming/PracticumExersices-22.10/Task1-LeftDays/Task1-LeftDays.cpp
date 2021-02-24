// Task1-LeftDays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int month, day;

    cin >> month >> day;

    int daysInMonth = 1;

	int pastDays = day;

	bool validMonth = month >= 1 && month <= 12;

	if (!validMonth) {
		cout << "There is no such month!";
	}
	else {
		switch (month)
		{
			case 1: case 3: case 5: case 7: case 8:  case 10: case 12:
				daysInMonth = 31;
				break;
			case 4: case 6: case 9: case 11:
				daysInMonth = 30;
				break;
			case 2:
				daysInMonth = 28;
				break;
		}
		bool validDay = day >= 1 && day <= daysInMonth;

		if (validDay) {
			switch (month)
			{
				case 2: pastDays += 31;
					break;
				case 3: pastDays += 59;
					break;
				case 4: pastDays += 90;
					break;
				case 5: pastDays += 120;
					break;
				case 6: pastDays += 151;
					break;
				case 7: pastDays += 181;
					break;
				case 8: pastDays += 212;
					break;
				case 9: pastDays += 243;
					break;
				case 10: pastDays += 273;
					break;
				case 11: pastDays += 304;
					break;
				case 12: pastDays += 334;
					break;
			}

			cout << 365 - pastDays;
		}
		else {
			cout << "There is no such day!" << endl;
		}
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
