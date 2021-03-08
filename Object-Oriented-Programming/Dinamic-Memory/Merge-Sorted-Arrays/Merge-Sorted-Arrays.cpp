#include <iostream>

bool has(int* arr, int size, int number) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number) {
			return true;
		}
	}
	return false;
}

int* mergeSortedArrays(int* arr1, int* arr2, int size1, int size2) {
	int* mergeSorted = new int[32];
	int index = 0;

	if (size1 < size2) {
		for (int i = 0; i < size1; i++)
		{
			if (arr1[i] < arr2[i]) {
				mergeSorted[index++] = arr1[i];
				while (has(arr1, 4, arr1[i])) {
					mergeSorted[index++] = arr1[i];
				}
 				mergeSorted[index++] = arr2[i];
			}
			else {
				mergeSorted[index++] = arr2[i];
				while (has(arr2, 3, arr2[i])) {
					mergeSorted[index++] = arr2[i];
				}
				mergeSorted[index++] = arr1[i];
			}
		}
		for (int i = size1 + 1; i <= size2; i++)
		{
			mergeSorted[index] = arr2[i];
			index++;
		}
	}
	else {
		for (int i = 0; i < size2; i++)
		{
			if (arr1[i] < arr2[i]) {
				int n = 0;
				while (has(arr1 + n + i, 4, arr1[i])) {
					mergeSorted[index++] = arr1[i];
					n++;
				}
				mergeSorted[index++] = arr2[i];
			}
			else {
				int n = 0;
				while (has(arr2 + n + i, 3, arr2[i])) {
					mergeSorted[index++] = arr2[i];
					n++;
				}
				mergeSorted[index++] = arr1[i];
			}
		}
		for (int i = size2 + 1; i <= size1; i++)
		{
			mergeSorted[index] = arr1[i];
			index++;
		}
	}

	return mergeSorted;
}

int main()
{
	int arr1[] = { 1, 3, 3, 5 };
	int arr2[] = { 2, 4, 5 };

	int* mergeSorted = mergeSortedArrays(arr1, arr2, 4, 3);

	for (int i = 0; i < 7; i++)
	{
		std::cout << mergeSorted[i] << " ";
	}
}
