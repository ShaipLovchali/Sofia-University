#include <iostream>
using namespace std;

void read(int* arr, int size, int i = 0) {
	// 1 - bottom of the recursion
	if (i == size) {
		return;
	}
	cin >> *arr;
	read(++arr, size, ++i);
}

void output(int* arr, int size, int i = 0) {
	if (i == size) {
		return;
	}
	cout << arr[i] << " ";
	output(++arr, size, ++i);
}

int main()
{
	int arr[5];
	read(arr, 5);
	output(arr, 5);
}
