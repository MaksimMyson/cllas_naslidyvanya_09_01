#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
private:
    std::string breed;

public:
    Dog(const std::string& name, const std::string& breed);
    void displayInfo() const override;
};

#endif // DOG_H