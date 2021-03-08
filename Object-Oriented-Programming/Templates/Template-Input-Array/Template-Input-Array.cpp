#include <iostream>

struct Student {
	char name[32];
	int fn;
};

template <typename T>
void inputArray(T* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

int main()
{
	Student students[3];
	inputArray(students, 3); // invalid

	char arr[3];
	inputArray(arr, 3);

	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}