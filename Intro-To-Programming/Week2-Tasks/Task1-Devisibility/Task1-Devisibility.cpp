#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	
	// check if number is divisible by 2
	if (number % 2 == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	// check if number is divisible by 2,3 and 5

	if (number % 2 == 0 && number % 3 == 0 && number % 5 == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
