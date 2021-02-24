#include <iostream>
using namespace std;

void swapElements(int *arr1, int *arr2) {
	for (int i = 0; i < 3; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

void printArray(int *arr) {
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr1[] = { 1, 2, 3 };
	int arr2[] = { 4, 5, 6 };

	swapElements(arr1, arr2);

	printArray(arr1);
	printArray(arr2);
}
