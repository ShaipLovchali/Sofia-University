#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1) {
			for (int j = 0; j < n / 2; j++)
			{
				cout << "#";
			}
		}
		else {
			for (int j = 0; j < n / 2; j++)
			{
				cout << ".";
			}
		}
		cout << "#";
		if (i == 0) {
			for (int j = 0; j < n - 2; j++)
			{
				cout << "#";
			}
		}
		else {
			for (int j = 0; j < n - 2; j++)
			{
				cout << ".";
			}
		}
		cout << "#";

		if (i == n - 1) {
			for (int j = 0; j < n / 2; j++)
			{
				cout << "#";
			}
		}
		else {
			for (int j = 0; j < n / 2; j++)
			{
				cout << ".";
			}
		}
		cout << endl;
	}

	int temp = 0;
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < 1 + i; j++)
		{
			cout << ".";
		}
		cout << "#";

		for (int j = 0; j < 2 * n - 5 - temp; j++)
		{
			cout << ".";
		}
		cout << "#";
		for (int j = 0; j < 1 + i; j++)
		{
			cout << ".";
		}
		temp += 2;
		cout << endl;
	}

	
	for (int j = 0; j < n - 1; j++)
	{
		cout << ".";
	}
	cout << "#";
	for (int j = 0; j < n - 1; j++)
	{
		cout << ".";
	}
}
