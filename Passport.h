#ifndef PASSPORT_H
#define PASSPORT_H

#include <string>

class Passport {
private:
    std::string fullName;
    std::string passportNumber;
    std::string dateOfBirth;

public:
    Passport(const std::string& fullName, const std::string& passportNumber, const std::string& dateOfBirth);
    void displayInfo() const;
};

#endif // PASSPORT_H