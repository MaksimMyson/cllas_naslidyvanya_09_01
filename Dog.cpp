#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(const std::string& name, const std::string& breed) : Pet(name), breed(breed) {}

void Dog::displayInfo() const {
    cout << "Dog: Name = " << name << ", Breed = " << breed << endl;
}