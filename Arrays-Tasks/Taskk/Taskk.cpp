// Taskk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfANumber(int number, int power) {
	while (number > 1)
	{
		if (number % power != 0) {
			return false;
		}
		number /= power;
	}
	return number == 1 ? true : false;
}

int closestHigher(int num) {
	if (isPowerOfANumber(num, 2)) {
		while (!isPowerOfANumber(num, 3)) {
			num++;
		}
	}
	else {
		while (!isPowerOfANumber(num, 5)) {
			num++;
		}
	}
	return num;
}

int closestLower(int num) {
	if (isPowerOfANumber(num, 2)) {
		while (!isPowerOfANumber(num, 3)) {
			num--;
		}
	}
	else {
		while (!isPowerOfANumber(num, 5)) {
			num--;
		}
	}
	return num;
}

int powerOfANumber(int number, int power) {
	int counter = 0;
	while (number > 1) {
		counter++;
		number /= power;
	}
	return counter;
}

void printClosestNum(int n, int power) {
	if (abs(n - closestHigher(n)) < abs(n - closestLower(n))) {
		cout << powerOfANumber(closestHigher(n), power);
	}
	else if (abs(n - closestHigher(n)) == abs(n - closestLower(n))) {
		cout << powerOfANumber(closestHigher(n), power) << " " << powerOfANumber(closestLower(n), power);
	}
	else {
		cout << powerOfANumber(closestLower(n), power);
	}
}

int main()
{
	// 2 -> 3 // 1
	int num = 2;
	if (isPowerOfANumber(num, 2)) {
		printClosestNum(num, 3);
	}
	else {
		printClosestNum(num, 5);
	}
}
