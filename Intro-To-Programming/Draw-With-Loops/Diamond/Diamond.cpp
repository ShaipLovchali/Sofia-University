#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 1) {
		cout << "*";
	}
	else if (n == 2) {
		cout << "**";
	}
	else {
		if (n % 2 == 0) {
			// first row
			for (int i = 0; i < (n / 2) - 1; i++)
			{
				cout << "-";
			}
			cout << "**";
			for (int i = 0; i < (n / 2) - 1; i++)
			{
				cout << "-";
			}
			cout << endl;

			int temp = 2;
			for (int i = 0; i < (n / 2) - 2; i++)
			{
				for (int j = 0; j < (n / 2) - 2 - i; j++)
				{
					cout << "-";
				}
				cout << "*";
				for (int j = 0; j < temp; j++)
				{
					cout << "-";
				}
				cout << "*";
				for (int j = 0; j < (n / 2) - 2 - i; j++)
				{
					cout << "-";
				}
				temp += 2;
				cout << endl;
			}

			cout << "*";
			for (size_t i = 0; i < n - 2; i++)
			{
				cout << "-";
			}
			cout << "*" << endl;

			int temp2 = n - 4;
			for (int i = (n / 2) - 2; i > 0; i--)
			{
				for (int j = 0; j < (n / 2) - 1 - i; j++)
				{
					cout << "-";
				}
				cout << "*";
				for (int j = 0; j < temp2; j++)
				{
					cout << "-";
				}
				cout << "*";
				for (int j = 0; j < (n / 2) - 1 - i; j++)
				{
					cout << "-";
				}
				temp2 -= 2;
				cout << endl;
			}

			for (size_t i = 0; i < n / 2 - 1; i++)
			{
				cout << "-";
			}
			cout << "**";
			for (size_t i = 0; i < n / 2 - 1; i++)
			{
				cout << "-";
			}
		}
		else {
			//first row
			for (int i = 0; i < n / 2; i++)
			{
				cout << "-";
			}
			cout << "*";
			for (int i = 0; i < n / 2; i++)
			{
				cout << "-";
			}
			cout << endl;

			//body

			int temp3 = 1;
			for (int i = 0; i < n / 2 - 1; i++)
			{
				for (int j = 0; j < n / 2 - 1 - i; j++)
				{
					cout << "-";
				}
				cout << "*";
				for (int j = 0; j < temp3; j++)
				{
					cout << "-";
				}
				cout << "*";
				for (int j = 0; j < n / 2 - 1 - i; j++)
				{
					cout << "-";
				}
				temp3 += 2;
				cout << endl;
			}
			cout << "*";
			for (int i = 0; i < n - 2; i++)
			{
				cout << "-";
			}
			cout << "*" << endl;

			int temp4 = n - 4;
			for (int i = n / 2 - 1; i > 0; i--)
			{
				for (int j = 0; j < n / 2 - i; j++)
				{
					cout << "-";
				}
				cout << "*";
				for (int j = 0; j < temp4; j++)
				{
					cout << "-";
				}
				cout << "*";
				for (int j = 0; j < n / 2 - i; j++)
				{
					cout << "-";
				}
				temp4 -= 2;
				cout << endl;
			}
			for (int i = 0; i < n / 2; i++)
			{
				cout << "-";
			}
			cout << "*";
			for (int i = 0; i < n / 2; i++)
			{
				cout << "-";
			}
		}
	}
}
