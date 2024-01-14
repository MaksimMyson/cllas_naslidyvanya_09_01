#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include <iostream>

using namespace std;

int main() {
    Dog myDog("Buddy", "Labrador");
    Cat myCat("Whiskers", "White");
    Parrot myParrot("Polly", "Ara");

    cout << "Pet Information:\n";
    myDog.displayInfo();
    myCat.displayInfo();
    myParrot.displayInfo();

    return 0;
}