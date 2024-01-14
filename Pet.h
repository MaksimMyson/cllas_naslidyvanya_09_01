#ifndef PET_H
#define PET_H

#include <string>

class Pet {
protected:
    std::string name;

public:
    Pet(const std::string& name);
    virtual void displayInfo() const = 0; // Pure virtual function
};

#endif // PET_H