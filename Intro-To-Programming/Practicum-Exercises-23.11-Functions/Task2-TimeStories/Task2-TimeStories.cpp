#include <iostream>
using namespace std;

int storyTime(int minutes) {
	int hours = minutes / 60;

	return hours;
}

bool validation(int minutes) {
	return (minutes > 0 && minutes < 1440) ? true : false;
}
int main()
{
	int minutes;
	cin >> minutes;

	if (validation) {
		cout << storyTime(minutes) << endl;
	}
	else {
		cout << "You enterned invalid amount of minutes!";
	}
}
