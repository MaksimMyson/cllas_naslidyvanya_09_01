#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(const std::string& name, const std::string& color) : Pet(name), color(color) {}

void Cat::displayInfo() const {
    cout << "Cat: Name = " << name << ", Color = " << color << endl;
}