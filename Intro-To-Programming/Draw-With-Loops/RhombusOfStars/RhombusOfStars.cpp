#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		cout << "*";
		for (size_t j = 0; j < i - 1; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
	for (size_t i = n - 1; i >= 1; i--)
	{
		for (size_t j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		cout << "*";
		for (size_t j = 0; j < i - 1; j++)
		{
			cout << " *";
		}
		cout << endl;
	}

}
