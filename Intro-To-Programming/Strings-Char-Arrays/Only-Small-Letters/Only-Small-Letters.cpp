#include <iostream>
using namespace std;

const int MAX_SIZE = 256;

void smallLetters(char* str, char* result) {

	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') {
			result[j] = str[i];
			j++;
		}
		i++;
	}
}
int main()
{
	char str[MAX_SIZE];
	cin >> str;
	char str2[MAX_SIZE] = {};
	smallLetters(str, str2);
	cout << str2;
}
