#include "BitString.h"

BitString::BitString() : String() {}

BitString::BitString(const char* cstr) : String() {
    if (cstr) {
        size_t len = std::strlen(cstr);
        data = new char[len + 1];

        for (size_t i = 0; i < len; ++i) {
            if (cstr[i] == '0' || cstr[i] == '1') {
                data[i] = cstr[i];
            }
            else {
                clear();
                break;
            }
        }

        length = len;
    }
}

BitString::BitString(const BitString& other) : String(other) {}

BitString& BitString::operator=(const BitString& other) {
    String::operator=(other);
    return *this;
}

void BitString::changeSign() {
    for (size_t i = 0; i < length; ++i) {
        if (data[i] == '0') {
            data[i] = '1';
        }
        else if (data[i] == '1') {
            data[i] = '0';
        }
    }
}

BitString BitString::operator+(const BitString& other) const {
    BitString result;
    result.length = (length > other.length) ? length : other.length;
    result.data = new char[result.length + 1];

    return result;
}

BitString& BitString::operator+=(const BitString& other) {
  
    return *this;
}

std::ostream& operator<<(std::ostream& os, const BitString& bStr) {
    os << bStr.data;
    return os;
}