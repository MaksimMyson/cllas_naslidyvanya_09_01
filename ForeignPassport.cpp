#include "ForeignPassport.h"
#include <iostream>

using namespace std;

ForeignPassport::ForeignPassport(const string& fullName, const string& passportNumber, const string& dateOfBirth,
    const string& passportNumberAbroad, const string& visaInfo)
    : Passport(fullName, passportNumber, dateOfBirth), passportNumberAbroad(passportNumberAbroad), visaInfo(visaInfo) {}

void ForeignPassport::displayInfo() const {
    Passport::displayInfo(); // Call the base class displayInfo()

    cout << "Passport Number Abroad: " << passportNumberAbroad << endl;
    cout << "Visa Information: " << visaInfo << endl;
}