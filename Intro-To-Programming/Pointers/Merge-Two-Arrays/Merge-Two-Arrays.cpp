#include <iostream>

const int MAX_SIZE = 256;

void inputArray(int* matrix, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cin >> *(matrix + i);
	}
}

void fillElements(int* arr1, int* arr2, int* merged, int size, int &counter) {
	for (int i = 0; i < size; i++)
	{
		if (arr1[i] > arr2[i]) {
			merged[counter] = arr2[i];
			counter++;
			merged[counter] = arr1[i];
		}
		else {
			merged[counter] = arr1[i];
			counter++;
			merged[counter] = arr2[i];
		}
		counter++;
	}
}

void merge(int* arr1, int* arr2, int *merged, int size1, int size2) {
	int counter = 0;

	if (size1 > size2) {
		//  6 3
		//	1 7 8 12 14 15
		//	2 6 7

		for (int i = 0; i < size2; i++)
		{
			if (arr2[i] == arr2[size2 - 1]) {
				if (arr2[i] > arr1[i]) {
					for (int k = i; k < size1; k++)
					{
						if (arr2[i] > arr1[k]) {
							merged[counter] = arr1[k];
							counter++;
						}
						else {
							merged[counter] = arr2[i];
							counter++;
							merged[counter] = arr1[k];
							counter++;
						}
					}
				}
				else{
					merged[counter] = arr2[i];
					counter++;
					merged[counter] = arr1[i];
					counter++;

					for (int k = 0; k < size1 - size2; k++)
					{
						merged[counter] = arr1[size2 + k];
						counter++;
					}
				}
			}else {
				for (int j = i; j < size1; j++)
				{
					if (arr2[i] > arr1[j]) {
						merged[counter] = arr1[j];
						counter++;
					}
					else if (arr2[i] == arr1[j]) {
						merged[counter] = arr1[j];
						counter++;
						merged[counter] = arr1[j];
						counter++;
					}
					else {
						if (i == j) {
							merged[counter] = arr2[i];
							counter++;
							merged[counter] = arr1[j];
							counter++;
							break;
						}
						else {
							merged[counter] = arr2[i];
							counter++;
							break;
						}
					}
				}
			}
			
		}
	}else if (size1 < size2) {

		// 1 7 9
		// 2 5 11 12 
		for (int i = 0; i < size1; i++)
		{
			if (arr1[i] == arr1[size1 - 1]) {
 				if (arr1[i] > arr2[i]) {
					for (int k = i; k < size2; k++)
					{
						if (arr1[i] > arr2[k]) {
							merged[counter] = arr2[k];
							counter++;
						}
						else {
							merged[counter] = arr1[i];
							counter++;
							merged[counter] = arr2[k];
							counter++;
						}
					}
				}
				else {
					merged[counter] = arr1[i];
					counter++;
					merged[counter] = arr2[i];
					counter++;

					for (int k = 0; k < size2 - size1; k++)
					{
						merged[counter] = arr2[size1 + k];
						counter++;
					}
				}
			}
			else {
				for (int j = i; j < size2; j++)
				{
					if (arr1[i] > arr2[j]) {
						merged[counter] = arr2[j];
						counter++;
					}
					else if (arr1[i] == arr2[j]) {
						merged[counter] = arr2[j];
						counter++;
						merged[counter] = arr2[j];
						counter++;
					}
					else {
						if (i == j) {
							merged[counter] = arr1[i];
							counter++;
							merged[counter] = arr2[j];
							counter++;
							break;
						}
						else {
							merged[counter] = arr1[i];
							counter++;
							break;
						}
					}
				}
			}

		}
	}
	else {
		fillElements(arr1, arr2, merged, size1, counter);
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
	int size1, size2;
	std::cin >> size1 >> size2;

	int arr1[MAX_SIZE];
	int arr2[MAX_SIZE];
	int merged[MAX_SIZE];

	inputArray(arr1, size1);
	inputArray(arr2, size2);

	merge(arr1, arr2, merged, size1, size2);

	printArray(merged, size1 + size2);
}
