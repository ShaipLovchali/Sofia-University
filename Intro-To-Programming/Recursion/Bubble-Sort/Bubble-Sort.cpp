#include <iostream>
using namespace std;
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* arr, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

int * bubble(int* arr, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	return arr;
}

void recurBubble(int* arr, int size) {
	if (size == 1) return;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1]) {
			swap(&arr[i], &arr[i + 1]);
		}
	}
	recurBubble(arr, size - 1);
}

void selectionSort(int* arr, int size) {
	
}

void output(int* arr, int size, int i = 0) {
	if (i == size) {
		return;
	}
	cout << *arr << " ";
	output(++arr, size, ++i);
}

int main()
{
	int arr[5] = { 5, 1, 7, 6, -1 };

	selectionSort(arr, 5);
	output(arr, 5);

}
