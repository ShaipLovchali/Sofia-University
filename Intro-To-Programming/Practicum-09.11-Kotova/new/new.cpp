// new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number;
	int a, b;
	cin >> a >> b;

	int count = 0;
	while (a > 0) {
		int currentDigit = a % 10;
		if (currentDigit % 2 != 0) {
			double average = 0;
			int counterOfDigits = 0;

			while (b > 0) {
				average += b % 10;
				counterOfDigits++;
				b /= 10;
			}
			average /= counterOfDigits;

			if (currentDigit > average) {
				count++;
			}
		}
		a /= 10;
	}

	cout << count << endl;

	//do {
	//	cin >> number;
	//} while (!(number > 0 && (number >= 1000 && number <= 9999)));

	//int fourthDigit = number % 10;
	//int thirdDigit = number / 10 % 10;
	//int secondDigit = number / 100 % 10;
	//int firstDigit = number / 1000;

	//if (firstDigit % 2 != 0) {
	//	if (firstDigit > secondDigit && firstDigit > thirdDigit && firstDigit > fourthDigit) {
	//		cout << "yes";
	//	}
	//	else {
	//		cout << "no";
	//	}
	//}
	//else {
	//	cout << "no";
	//}
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
