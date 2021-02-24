#include <iostream>

const int MAX_SIZE = 256;

void inputArray(int* matrix, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cin >> *(matrix + i);
	}
}

int digitSum(int number) {
	int sum = 0;
	while (number != 0) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void digitSort(int* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (digitSum(arr[i]) > digitSum(arr[j])) {
				swap(&arr[i], &arr[j]);
			}
			else if (digitSum(arr[i]) == digitSum(arr[j])) {
				if (arr[j] < arr[i]) {
					swap(&arr[i], &arr[j]);
				}
			}
		}
	}
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";
	}
}

int main()
{
	int n;
	std::cin >> n;
	int arr[MAX_SIZE];

	inputArray(arr, n);

	digitSort(arr, n);

	printArray(arr, n);
}
