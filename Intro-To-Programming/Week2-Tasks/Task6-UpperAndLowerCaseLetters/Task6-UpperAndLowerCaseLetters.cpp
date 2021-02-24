#include <iostream>
using namespace std;

int main()
{
    char letter;
    cin >> letter;

    if (isdigit(letter)) {
        cout << "The character is not a letter";
    }
    else {
        if (isupper(letter)) {
            cout << "Upper" << endl;
            cout << "To lower: " << (char)tolower(letter);
        }
        else {
            cout << "Lower" << endl;
            cout << "To upper: " <<(char)toupper(letter);
        }
    }
}
