#include <iostream>
using namespace std;

bool isMatching(char* model, const char* currentModel) {
    int i = 0;
    while(model[i] != '\0'){
        if (model[i] != currentModel[i]) {
            return false;
        }
        i++;
    }
    return true;
}

void model(const char* watch) {
    int i = 0;
    while (watch[i] != ' ') {
        i++;
    }

    for (int j = i+1; watch[j] !='\0'; j++)
    {
        cout << watch[j];
    }
}

int main()
{
    char brand[50];
    cin >> brand;

    char watch1[32] = "Rolex h1h3tgs";
    char watch3 [32] = "Q&Q akjkfdjsdjk";
    char watch2 [32] = "Casio gShock";

    char* watches[3];
    watches[0] = watch1;
    watches[1] = watch2;
    watches[2] = watch3;

    for (int i = 0; i < 3; i++)
    {
        if (isMatching(brand, watches[i])) {
            model(watches[i]);
        }
    }
  

    
}
