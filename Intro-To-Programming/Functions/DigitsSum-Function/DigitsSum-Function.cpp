#include <iostream>

int digitsSum(int number) {
    int sumOfDigits = 0;

    while (number > 0) {
        sumOfDigits += number % 10;
        number /= 10;
    }

    return sumOfDigits;
}
int main()
{
    int number;
    std::cin >> number;

    std::cout << digitsSum(number);
}
