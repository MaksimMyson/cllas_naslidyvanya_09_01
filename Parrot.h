#ifndef PARROT_H
#define PARROT_H

#include "Pet.h"

class Parrot : public Pet {
private:
    std::string species;

public:
    Parrot(const std::string& name, const std::string& species);
    void displayInfo() const override;
};

#endif // PARROT_H