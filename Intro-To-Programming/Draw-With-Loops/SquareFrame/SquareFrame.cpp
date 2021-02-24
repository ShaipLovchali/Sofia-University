#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	cout << "+ ";
	for (size_t i = 0; i < n - 2; i++)
	{
		cout << "- ";
	}
	cout << "+" << endl;

	for (size_t i = 0; i < n - 2; i++)
	{
		cout << "| ";
		for (size_t j = 0; j < n - 2; j++)
		{
			cout << "- ";
		}
		cout << "|" << endl;
	}

	cout << "+ ";
	for (size_t i = 0; i < n - 2; i++)
	{
		cout << "- ";
	}
	cout << "+" << endl;
}
