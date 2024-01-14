#ifndef FOREIGNPASSPORT_H
#define FOREIGNPASSPORT_H

#include "Passport.h"
#include <string>

class ForeignPassport : public Passport {
private:
    std::string passportNumberAbroad;
    std::string visaInfo;

public:
    ForeignPassport(const std::string& fullName, const std::string& passportNumber, const std::string& dateOfBirth,
        const std::string& passportNumberAbroad, const std::string& visaInfo);
    void displayInfo() const; // Overrides displayInfo() in Passport
};

#endif // FOREIGNPASSPORT_H