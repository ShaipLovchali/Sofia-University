#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// first row
	for (size_t i = 0; i < 2 * n; i++)
	{
		cout << "*";
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << " ";
	}
	for (size_t i = 0; i < 2 * n; i++)
	{
		cout << "*";
	}
	cout << endl;

	// body
	for (size_t i = 0; i < n - 2; i++)
	{
		cout << "*";
		for (size_t i = 0; i < n * 2 - 2; i++)
		{
			cout << "/";
		}
		cout << "*";

		if (i == ((n - 1) / 2) - 1){
			
			for (size_t i = 0; i < n; i++)
			{
				cout << "|";
			}
		}
		else {
			for (size_t i = 0; i < n; i++)
			{
				cout << " ";
			}
		}

		cout << "*";
		for (size_t i = 0; i < n * 2 - 2; i++)
		{
			cout << "/";
		}
		cout << "*";
		cout << endl;
	}

	// last row
	for (size_t i = 0; i < 2 * n; i++)
	{
		cout << "*";
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << " ";
	}
	for (size_t i = 0; i < 2 * n; i++)
	{
		cout << "*";
	}
}
