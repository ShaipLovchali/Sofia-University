#include <iostream>

const int MAX_SIZE = 256;

bool increasingElements(int arr[], int size) {
	int currentElement = arr[0];
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i + 1] < currentElement) {
			return false;
		}
		else {
			currentElement = arr[i + 1];
		}
	}
	return true;
}

int main()
{
	int arr[MAX_SIZE];
	int size;
	std::cin >> size;

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	increasingElements(arr, size) ? std::cout << "true" : std::cout << "false";
}
