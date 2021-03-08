#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

struct PolarCoordinates {
    double angle;
    double radius;
};

struct RectangleCoordinates {
    double x;
    double y;
};

void polarToRect(PolarCoordinates polar) {
    double x = polar.radius * cos(polar.angle * PI / 180);
    double y = polar.radius * sin(polar.angle * PI / 180);
    std::cout << "Point X in rect coordinate system is: " << x << std::endl;
    std::cout << "Point Y in rect coordinate system is: " << y << std::endl;
}

void rectToPolar(RectangleCoordinates rect) {
    double radius = sqrt(rect.x * rect.x + rect.y * rect.y);
    double angle = atan(rect.y / rect.x) * 180 / PI;
    std::cout << "Radius in polar is: " << radius << std::endl;
    std::cout << "Angle in polar is: " << angle << std::endl;
}

int main()
{
    PolarCoordinates polar;

    RectangleCoordinates rect;

    char coordinateSystem;
    std::cin >> coordinateSystem;

    if (coordinateSystem == 'p') {
        std::cin >> polar.radius;
        std::cin >> polar.angle;

        polarToRect(polar);
    }
    else if (coordinateSystem == 'r') {
        std::cin >> rect.x;
        std::cin >> rect.y;

        rectToPolar(rect);
    }
}