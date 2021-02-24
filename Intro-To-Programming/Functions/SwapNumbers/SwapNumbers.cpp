#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
	a += b;
	b = a - b;
	a -= b;
}

int main()
{
	int a = 11;
	int b = 6;

	swapNumbers(a, b);
	cout << a << " " << b << endl;
}
