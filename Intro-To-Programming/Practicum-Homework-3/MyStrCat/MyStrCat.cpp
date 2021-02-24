#include <iostream>

const int MAX_SIZE = 256;

int len(char* str) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

void myStrCat(char* str1, char* str2, char* result) {
	int counter = 0;

	for (int i = 0; str1[i] != '\0'; i++)
	{
		result[counter] = str1[i];
		counter++;
	}
	for (int i = 0; str2[i] != '\0'; i++)
	{
		result[counter] = str2[i];
		counter++;
	}
	result[counter] = '\0';

	// Ако искаме да добавим към първия низ втория, без да използваме допълнителен масив, мисля, че трябва
	// да заделим масивите динамично, защото иначе не е добре ако си променяме размера на първия масив в стака 

	// Написал съм и това решение, в което променяме масива в стака, въпреки че не е добра идея да го правим, а е 
	// по-добре да заделим динамично паметта

	/*int length = len(str1);

	int counter = 0;
	for (int i = 0; str2[i] != '\0'; i++)
	{
		str1[length + counter] = str2[i];
		counter++;
	}
	str1[length + counter] = '\0';*/
}

int main()
{
	char str1[MAX_SIZE], str2[MAX_SIZE], result[MAX_SIZE];
	std::cin >> str1 >> str2;

	myStrCat(str1, str2, result);

	std::cout << result;
}
