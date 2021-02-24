#include <iostream>
using namespace std;

int digitsCount(int n, int digit, int counter = 0) {
	if (n <= 0) {
		return counter;
	}
	if (n % 10 == digit) {
		counter++;
	}
	return digitsCount(n /= 10, digit, counter);
}
int main()
{
	int n, digit;
	cin >> n >> digit;

	int digits = digitsCount(n, digit);
	cout << digits;
}
