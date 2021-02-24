#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    // 865 -> 8 6 5 -> 20

    int lastDigit = number % 10;
    number /= 10;
    int secondDigit = number % 10;
    int firstDigit = number / 10;

    int sum = firstDigit + secondDigit + lastDigit;

    cout << firstDigit << " " << secondDigit << " " << lastDigit << " -> " << sum << endl;

    return 0;
}
