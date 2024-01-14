#include "Passport.h"
#include <iostream>

using namespace std;

Passport::Passport(const string& fullName, const string& passportNumber, const string& dateOfBirth)
    : fullName(fullName), passportNumber(passportNumber), dateOfBirth(dateOfBirth) {}

void Passport::displayInfo() const {
    cout << "Full Name: " << fullName << endl;
    cout << "Passport Number: " << passportNumber << endl;
    cout << "Date of Birth: " << dateOfBirth << endl;
}