#include "Parrot.h"
#include <iostream>

using namespace std;

Parrot::Parrot(const std::string& name, const std::string& species) : Pet(name), species(species) {}

void Parrot::displayInfo() const {
    cout << "Parrot: Name = " << name << ", Species = " << species << endl;
}