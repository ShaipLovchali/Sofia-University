// Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char symbol;
	cin >> symbol;

	if (symbol >= 'A' && symbol <= 'Z') {
		cout << symbol << " is uppercase!" << endl;
		cout << "To lowercase: "<< (char)(symbol + 32);
	}
	else if (symbol >= 'a' && symbol <= 'z') {
		cout << symbol << " is lowercase!" << endl;
		cout << "To uppercase: "<< (char)(symbol - 32);
	}
	else if (symbol >= '0' && symbol < '9') {
		cout << symbol << " is digit" << endl;
		cout << char(symbol + 1);
	}
	else if (symbol == 57) {
		cout << "There isn't next digit";
	}
	else {
		cout << "Wrong input!";
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
