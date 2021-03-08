#include <iostream>

template <typename T, typename S>
bool isMember(T* arr, int n, S x) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x) {
			return true;
		}
	}
	return false;
}

int main()
{
	int arr[] = { 1, 42, 69 };

	std::cout << isMember(arr, 3, 69);
}
