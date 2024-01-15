#ifndef BIT_STRING_H
#define BIT_STRING_H

#include "String.h"

class BitString : public String {
public:
    BitString();
    BitString(const char* cstr);
    BitString(const BitString& other);

    BitString& operator=(const BitString& other);

    void changeSign();
    BitString operator+(const BitString& other) const;
    BitString& operator+=(const BitString& other);

    friend std::ostream& operator<<(std::ostream& os, const BitString& bStr);
};

#endif // BIT_STRING_H