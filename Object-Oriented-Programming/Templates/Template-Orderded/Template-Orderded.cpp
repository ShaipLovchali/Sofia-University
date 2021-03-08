#include <iostream>

template <typename T>
bool orderded(T* arr, int n) {
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] >= arr[i + 1]) {
			return false;
		}
	}
	return true;
}

int main()
{
	double arr[] = { 1.3, 1.2, 1.3};

	std::cout << orderded(arr, 3);
}
