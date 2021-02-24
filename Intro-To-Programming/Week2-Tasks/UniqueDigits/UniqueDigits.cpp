#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	// 1234

	int lastDigit = number % 10;
	number /= 10;
	int thirdDigit = number % 10;
	number /= 10;
	int secondDigit = number % 10;
	int firstDigit = number / 10;

	if (firstDigit != secondDigit) {
		if (firstDigit != thirdDigit && secondDigit != thirdDigit) {
			if (firstDigit != lastDigit && secondDigit != lastDigit && thirdDigit != lastDigit) {
				cout << "Yes";
			}
			else {
				cout << "No";
			}
		}
		else {
			cout << "No";
		}
	}
	else {
		cout << "No";
	}
}
