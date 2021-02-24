#include <iostream>

int myCeil(double num) {
    if (num == (int)num) {
        return num;
    }
    if (num < 0) {
        return (int)num;
    }
    return (int)num + 1;
}
int main()
{
    double number;
    std::cin >> number;

    std::cout << myCeil(number);
}
