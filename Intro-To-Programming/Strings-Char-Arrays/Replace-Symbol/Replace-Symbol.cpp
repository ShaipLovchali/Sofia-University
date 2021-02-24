#include <iostream>
using namespace std;

const int MAX_SIZE = 256;

void replaceSymbol(char* str, char symbol1, char symbol2) {
	for (int i = 0; str[i] != '\0' ; i++)
	{
		if (str[i] == symbol1) {
			str[i] = symbol2;
		}
	}
}

int main()
{
	char str[MAX_SIZE];
	cin >> str;
	
	char symbol1, symbol2;
	cin >> symbol1 >> symbol2;

	replaceSymbol(str, symbol1, symbol2);

	cout << str;
}
 