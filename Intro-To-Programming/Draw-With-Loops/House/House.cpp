// House.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
	
	if (n % 2 == 0) {
		for (size_t i = 0; i < (n + 1) / 2; i++)
		{
			for (size_t j = 0; j < (n / 2 - i) - 1; j++)
			{
				cout << "-";
			}
			cout << "**";
			for (size_t j = 0; j < i; j++)
			{
				cout << "**";
			}
			for (size_t j = 0; j < (n / 2 - i) - 1; j++)
			{
				cout << "-";
			}
			cout << endl;
		}
	}
	else {
		for (size_t i = 0; i < (n + 1) / 2; i++)
		{
			for (size_t j = 0; j < (n / 2) - i ; j++)
			{
				cout << "-";
			}
			cout << "*";
			for (size_t j = 0; j < i; j++)
			{
				cout << "**";
			}
			for (size_t j = 0; j < (n / 2) - i; j++)
			{
				cout << "-";
			}
			cout << endl;
		}
	}
	
	for (int i = 0; i < n / 2; i++)
	{
		cout << "|";
		for (int i = 0; i < n - 2; i++)
		{
			cout << "*";
		}
		cout << "|" << endl;
	}
}
