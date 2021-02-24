#include <iostream>

const int MAX_SIZE = 256;

void inputArray(int* matrix, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cin >> *(matrix + i);
	}
}

int* findDigit(int* arr, int n, int digit) {
	for (int i = 0; i < n; i++)
	{
		if (*(arr + i) == digit) {
			return (arr + i);
		}
	}
	return nullptr;
}

int main()
{
	int n, digit;
	std::cin >> n >> digit;
	int arr[MAX_SIZE];

	inputArray(arr, n);

	std::cout << findDigit(arr, n, digit);
	
}
