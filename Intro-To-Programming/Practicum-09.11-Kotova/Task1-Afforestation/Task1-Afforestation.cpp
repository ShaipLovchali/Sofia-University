// Task1-Afforestation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
    //int trees[SIZE] = {};
    //int n;

    //do {
    //    cout << "Enter a number between 0 and 100: ";
    //    cin >> n;
    //} while (!(n > 0 && n <= 100));

    //for (int i = 0; i < n; i++)
    //{
    //    do {
    //        cout << "Enter height between 0 and 100m: ";
    //        cin >> trees[i];
    //    } while (trees[i] < 0 || trees[i] > 100);
    //}

    //for (size_t i = 0; i < n; i++)
    //{
    //    if (i % 2 == 0) {
    //        cout << trees[i] << " ";
    //    }
    //}
    //cout << endl;
    //
    //for (size_t i = 0; i < n; i++)
    //{
    //    if (i % 2 != 0) {
    //        cout << trees[i] << " ";
    //    }
    //}


    int trees[SIZE] = {};
    int n;

    do {
        cout << "Enter a number between 0 and 100: ";
        cin >> n;
    } while (!(n > 0 && n <= 100));

    for (int i = 0; i < n; i++)
    {
        do {
            cout << "Enter height between 0 and 100m: ";
            cin >> trees[i];
        } while (trees[i] < 0 || trees[i] > 100);
    }

    bool flag = true;
    for (int i = 0; i < n && flag; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (trees[i] == trees[j]) {
                flag = false;
                break;
            }
        }
    }

    cout << "Are all of the elements different: "<< boolalpha << flag << endl;
}
