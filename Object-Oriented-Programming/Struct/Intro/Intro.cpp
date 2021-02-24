#include <iostream>
#include "Computer.h"
#include "Cat.h"
#include "Friend.h"
#include "FMI.h"

// темплейтна фукнция
template <typename T>
T add(T a, T b) {
    return a + b;
}


struct computer {
    double price;
    int ssd;
    int ram;
};

struct dog {

    // член данни
    bool gender; // 1 - male 0 - female
    int age;
    double height, weigth;

    // методи
    void bark() {
        std::cout << "bow-bow";
    }
};

struct book{
public:
    int pages;
    double price;
    int code;
};

class book2 {
    // при класа член данните и методите са private по подразбиране, докато при struct са public
public:
    int pages;
    double price;
    int code;
};

Friend& findYounges(Friend* friends, int n) {
    Friend* temp = &friends[0];
    for (int i = 0; i < 6; i++)
    {
        if (temp->getAge() >= friends[i].getAge()) {
            temp = &friends[i];
        }
    }
    return *temp;
}

int main()
{
    //computer c;
    //c.price = 1450;
    //c.ssd = 512;
    //c.ram = 16;

    //computer cc;

    //dog d;
    //d.age = 10;
    //d.gender = 0;
    //d.height = 60;
    //d.weigth = 30;

    //cc = c;

    //std::cout << cc.price << std::endl;

    //book b;
    //b.pages = 500; // .....

    //d.bark();

    /*Computer c;
    c.setPrice(1200);
    c.printComputer();
    std::cout << c.getSSD() << std::endl;

    Cat cat;
    
    cat.printCat();*/

    //enum color{orange, red, purple, green, pink}; // enumerator

    //color c = red;
    //color b = pink;
    //std::cout << c << std::endl;
    //std::cout << b << std::endl;

    //switch (c)
    //{
    //    case orange: std::cout << "orange" << std::endl;
    //        break;
    //    case red: std::cout << "red" << std::endl;
    //        break;
    //    case purple: std::cout << "purple" << std::endl;
    //        break;
    //    case green: std::cout << "green" << std::endl;
    //        break;
    //    case pink: std::cout << "pink" << std::endl;
    //        break;
    //    default:
    //        break;
    //}

    //Friend f;
    //f.printFriend();
    //f.input();
    //f.printFriend();
   /* Friend ivan(female, "Ivan", "George", 34, "plumber");
    ivan.printFriend();*/


    FMI fmi1, fmi2(2), fmi3(12, "Parvanov"), fmi4;
    fmi1.print();
    fmi2.print();
    fmi3.print();

    fmi4.input();
    fmi4.print();

    std::cout << add(5.3, 4.6) << std::endl;
    std::cout << add<int>('a', 'b');
    int arr[] = {1, 2, 3, 4};
    int arr2[] = {1, 4, 3, 2};

    std::cout << add<int>(*arr, *arr2);
}
