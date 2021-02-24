#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	// 10 15
	a = a + b;
	b = a - b;
	a = a - b;

	cout << a << "\n" << b << endl;
}
