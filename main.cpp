#include "Passport.h"
#include "ForeignPassport.h"
#include <iostream>

using namespace std;

int main() {
    // Creating an object of the Passport class
    Passport passport("Ivan Ivanov", "AA123456", "01.01.1990");

    // Calling the displayInfo method for Passport
    cout << "Passport Information:" << endl;
    passport.displayInfo();
    cout << endl;

    // Creating an object of the ForeignPassport class
    ForeignPassport foreignPassport("Petro Petrov", "BB789012", "15.05.1985", "XX987654", "USA - Tourist Visa");

    // Calling the displayInfo method for ForeignPassport
    cout << "Foreign Passport Information:" << endl;
    foreignPassport.displayInfo();

    return 0;
}