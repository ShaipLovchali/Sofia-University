#include <iostream>
using namespace std;

int main()
{
	int threeDigitsNumber;
	cout << "Please enter a three digits number: ";
	cin >> threeDigitsNumber;

	// 875
	int lastDigit = threeDigitsNumber % 10; // -> 5
	threeDigitsNumber = threeDigitsNumber / 10; // -> 87
	int secondDigit = threeDigitsNumber % 10; // -> 7
	int firstDigit = threeDigitsNumber / 10; // -> 8

	int sum = firstDigit + secondDigit + lastDigit;

	cout << firstDigit << " " << secondDigit << " " << lastDigit << " -> " << sum << endl;
	
}
