#include <iostream>
using namespace std;

int storyTime(int minutes) {
	return minutes / 60;
}

int viewers(int hours, int followers) {
	int views = 0;
	
	if (hours >= 0 && hours <= 6) {
		views = followers * 0.2;
	}
	else if (hours <= 12) {
		views = followers * 0.4;
	}
	else if (hours <= 17) {
		views = followers * 0.3;
	}
	else if (hours <= 23) {
		views = followers;
	}

	return views;
}

int main()
{
	int minutes, followers;
	cin >> minutes >> followers;

	if (minutes < 0 || minutes > 1440) {
		cout << "You enterned invalid amount of minutes!";
	}
	else {
		int views = viewers(storyTime(minutes), followers);
		cout << views;
	}
}
