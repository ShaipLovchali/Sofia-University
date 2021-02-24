#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Find the area and the perimeter of a rectangle with sides 10cm and 3cm

    int sideA = 10, sideB = 3;

    cout << "Perimeter = " << 2 * sideA + 2 * sideB << endl;
    cout << "Area = " << sideA * sideB << endl;


    // Find the area and the perimeter of a triangle with sides 11cm, 17cm and 8cm

    int sideAC = 11, sideBC = 8, sideAB = 17;

    double halfPerimeter = (sideAC + sideBC + sideAB) / 2.0;

    cout << "Perimeter = " << sideAC + sideBC + sideAB << endl;
    
    double area = sqrt(halfPerimeter * (halfPerimeter - sideAC) * (halfPerimeter - sideBC) * (halfPerimeter - sideAB));
    
    cout << "Area = " << area << endl;
}
