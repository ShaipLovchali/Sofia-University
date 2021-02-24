#include <iostream>
using namespace std;

const int MAX_SIZE = 255;

double report() {
	char sequence[MAX_SIZE];
	cin >> sequence;
	
	double result = 0;
	int hashtagCounter = 0;
	for (size_t i = 0; sequence[i] != '\0'; i++)
	{
		if (sequence[i] == '#') {
			result += hashtagCounter * 100;
			hashtagCounter++;
		}
	}

	return result;
}

int main()
{
	cout << report() << "BGN" << endl;
}
