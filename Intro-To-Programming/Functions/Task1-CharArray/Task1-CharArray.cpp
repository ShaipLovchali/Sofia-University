#include <iostream>
using namespace std;

const int MAX_SIZE = 255;


bool isDigit(char arr[], int index) {
	if (arr[index] >= '0' && arr[index] <= '9') {
		return true;
	}
	return false;
}
void printNumbers(char arr[]) {
	for (size_t i = 0; arr[i] != '\0'; i++)
	{
		// 12 2
		if (isDigit(arr, i) && (arr[i + 1] == ' ' || arr[i + 1] == '\0')) {
			cout << arr[i] << " ";
		}
		else {
			i += 2;
		}
	}
	cout << endl;
}

void printSmallLetters(char arr[]) {
	for (size_t i = 0; arr[i] != '\0'; i++)
	{
		// 1 2 3 s q
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}

void printRestElements(char arr[]) {
	for (size_t i = 0; arr[i] != '\0'; i++)
	{
		if (!(arr[i] >= '0' && arr[i] <= '9') && !(arr[i] >= 'a' && arr[i] <= 'z') && arr[i] != ' ') {
			cout << arr[i] << " ";
		}

		if (isDigit(arr, i) && isDigit(arr, i+ 1)) {
			int currentNumber = arr[i] - '0';
			i++;

			while (arr[i] >= '0' && arr[i] <= '9') {
				currentNumber *= 10;
				currentNumber += arr[i] - '0';
				i++;
			}
			cout << currentNumber << " ";
		}
	}
}

int main()
{
	char arr[255] = {};
	cin.getline(arr, MAX_SIZE);

	printNumbers(arr);
	printSmallLetters(arr);
	printRestElements(arr);
}