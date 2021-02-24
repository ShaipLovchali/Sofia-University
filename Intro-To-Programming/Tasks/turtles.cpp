#include <iostream>
using namespace std;

int main() {
    int turtleFood, catFood;
    cin >> turtleFood >> catFood;

    double turtleFoodPrice = turtleFood * 2.50;
    double catFoodPrice = catFood * 4;

    double total = turtleFoodPrice + catFoodPrice;
    cout << total << " lv." << endl;

    return 0;
}

