#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
private:
    std::string color;

public:
    Cat(const std::string& name, const std::string& color);
    void displayInfo() const override;
};

#endif // CAT_H