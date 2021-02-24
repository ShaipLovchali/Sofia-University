#include <iostream>
using namespace std;

void swapValues(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int* reverseArray(int* arr, int size) {
	for (int i = 0; i < size / 2; i++)
	{
		swapValues(&arr[i], &arr[size - 1 - i]);
	}
	return arr;
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
}

int main()
{

	double a = 4.0 / 0.0;
	cout << a;
	/*int arr[] = { 1, 2, 3, 4, 5 };

	printArray(reverseArray(arr, 5), 5);*/
}
