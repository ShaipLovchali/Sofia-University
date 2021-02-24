#include <iostream>
using namespace std;

void swapValues(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int n = 5;
	int b = 6;

	/*swapValues(&a, &b);*/

	cout << *&n;

	char blocks[3] = { 'A','B','C' };
	char* ptr = &blocks[0];
	char temp;
	temp = blocks[0];
	std::cout << temp << std::endl;
	temp = *(blocks + 2);
	std::cout << temp << std::endl;
	temp = *(ptr + 1);
	std::cout << temp << std::endl;
	temp = *ptr;
	std::cout << temp << std::endl;
	std::cout << std::endl;

	ptr = blocks + 1;
	std::cout << temp << std::endl;
	temp = *ptr;
	std::cout << temp << std::endl;
	temp = *(ptr + 1);
	std::cout << temp << std::endl;
	std::cout << std::endl;

	ptr = blocks;
	temp = *++ptr; //B
	std::cout << temp << std::endl;
	temp = ++ * ptr; // C
	std::cout << temp << std::endl;
	temp = *ptr++; // C
	std::cout << temp << std::endl;
	temp = *ptr; // C
	std::cout << temp << std::endl;

	int* p1 = &n;
	const int* p2 = &n;
	int const* p2b = &n;
	int* const p3 = &n;
	const int* const p4 = &n;

	/*char arr[] = "Hello";
	char* pointer = &arr[0];

	cout << pointer << endl;

	char* pointer3 = &arr[3];

	cout << &pointer3 << endl;*/


	//cout << a << " " << b << endl;
}
