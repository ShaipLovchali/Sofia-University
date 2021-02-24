#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 256;

int len(char* str) {
	int len = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return len;
}

int main()
{
	char str[MAX_SIZE];
	cin.getline(str, MAX_SIZE);

	cout << len(str);

	/*char str[100];
	cin.getline(str, 100);
	cout << str << endl;
	cout << strlen(str)<<endl; 
	strcpy_s(str, "Hii");
	cout << str << endl;

	strcat_s(str, "Hii");
	cout << str;*/
}