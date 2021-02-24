#include <iostream>
using namespace std;

const int MAX = INT16_MAX;
int main()
{
	int arrayOfNums[MAX] = {};

	int n;
	cin >> n;
	double average = 0;
	int count = 0;

	for (size_t i = 0; i < n; i++)
	{
		int currNum;
		cin >> currNum;
		arrayOfNums[i] = currNum;
		average += currNum;

		count++;
	}

	average /= count;

	int closestHigher;

	for (size_t i = 0; i < n - 1; i++)
	{
		double temp1 = arrayOfNums[i] - average;
		double temp2 = arrayOfNums[i + 1] - average;

		if ((temp1 >= temp2) && (temp1 >= 0 && temp2 >= 0)) {
			closestHigher = arrayOfNums[i + 1];
		}
	}

	int closestLower;
	for (size_t i = 0; i < n - 1; i++)
	{
		double temp1 = average - arrayOfNums[i];
		double temp2 = average - arrayOfNums[i + 1];

		if ((temp1 >= temp2) && (temp1 >= 0 && temp2 >= 0)) {
			closestLower = arrayOfNums[i + 1];
		}
	}
			
}
