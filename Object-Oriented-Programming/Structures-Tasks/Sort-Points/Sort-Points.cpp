#include <iostream>

struct Point {
	double x;
	double y;
};

void swap(double& a, double& b) {
	double c = a;
	a = b;
	b = c;
}

void sortPoints(Point* points) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 - i - 1; j++)
		{
			if (points[j].x > points[j + 1].x && points[j].y > points[j + 1].y) {
				swap(points[j].x, points[j + 1].x);
				swap(points[j].y, points[j + 1].y);
			}
		}
	}
}

int main()
{
	Point points[3];

	points[0].x = 5;
	points[0].y = 5;

	points[1].x = -5;
	points[1].y = 4;

	points[2].x = 4;
	points[2].y = -3;

	sortPoints(points);

	for (int i = 0; i < 3; i++)
	{
		std::cout << points[i].x << std::endl;
		std::cout << points[i].y << std::endl;
	}
}
