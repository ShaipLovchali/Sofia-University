#include <iostream>

// returns first char of string str
char car(const char* str) {
	return str[0];
}

// returns rest of the string except his first char
char* cdr(char* str) {
	return str + 1;
}

// returns pointer to a string in dynamic memory consisting of concatenation of char x and string str
char* cons(char x, const char* str) {
	char* concat = new char[32];
	int index = 1;
	concat[0] = x;

	for (int i = 0; str[i] != '\0'; i++)
	{
		concat[index] = str[i];
		index++;
	}
	concat[index] = '\0';

	return concat;
}

int len(const char* str) {
	int length = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return length;
}

// returns whether strings and equal or not
bool eq(const char* str1, const char* str2) {
	for (int i = 0; i < std::max(len(str1), len(str2)); i++)
	{
		if (str1[i] != str2[i]) {
			return false;
		}
	}
	return true;
}


char* car_n(char* str, int n) {
	char* nSymStr = new char[n+1];

	int index = 0;
	for (int i = 0; i < n; i++)
	{
		nSymStr[index] = car(str + i);
		index++;
	}
	nSymStr[index] = '\0';
	return nSymStr;
}

char* cdr_n(char* str, int n) {
	return (str + n);
}

int main()
{
	char str1[] = "Helloo";
	char str2[] = "Hello";
	
	std::cout << cdr_n(str1, 2);
}
