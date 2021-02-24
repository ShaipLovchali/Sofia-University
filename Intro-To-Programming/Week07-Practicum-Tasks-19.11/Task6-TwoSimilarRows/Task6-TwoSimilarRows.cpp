#include <iostream>
#define SIZE 256
using namespace std;

int main()
{
    int matrix[SIZE][SIZE] = 
	{
		{2, 6, 1},
		{3, 6, 2},
		{8, 1, 8}
	};

	bool found = false;
	for (size_t i = 0; i < 3 && found == false; i++)
	{
		int d = i;
		for (size_t j = 0; j < 3 && d != 2; j++)
		{
			int currElement = matrix[j][i];
			bool contains = false;
			for (size_t k = 0; k < 3; k++)
			{
				if (currElement == matrix[k][d + 1]) {
					contains = true;
					break;
				}
			}
			if (contains == false) {
				d++;
				j = -1;
			}
			if (j == 2 && contains) {
				found = true;
				break;
			}
		}
	}

	cout << boolalpha << found;
	
}
