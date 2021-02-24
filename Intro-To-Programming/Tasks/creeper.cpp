#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cin >> x;

    double headVolume = pow(x, 3);
    double bodyVolume = x * (x / 2) * (2 * x);
    double feetVolume = 2 * (x * (x / 2) * (3 * x / 4));

    double totalVolume = headVolume + bodyVolume + feetVolume;
    cout << "The creeper's volume is: " << totalVolume << endl;

    return 0;
}

