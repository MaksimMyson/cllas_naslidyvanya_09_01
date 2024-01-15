#include "String.h"
#include <iostream>
#include <cstring>

String::String() : data(nullptr), length(0) {}

String::String(const char* cstr) : data(nullptr), length(0) {
    if (cstr) {
        length = std::strlen(cstr);
        data = new char[length + 1];
        strcpy_s(data, length + 1, cstr);
    }
}

String::String(const String& other) : data(nullptr), length(other.length) {
    if (other.data) {
        data = new char[length + 1];
        strcpy_s(data, length + 1, other.data);
    }
}

String::~String() {
    delete[] data;
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] data;

        length = other.length;
        if (other.data) {
            data = new char[length + 1];
            strcpy_s(data, length + 1, other.data);
        }
        else {
            data = nullptr;
        }
    }
    return *this;
}

size_t String::getLength() const {
    return length;
}

void String::clear() {
    delete[] data;
    data = nullptr;
    length = 0;
}

String String::operator+(const String& other) const {
    String result;
    result.length = length + other.length;
    result.data = new char[result.length + 1];

    if (data) {
        strcpy_s(result.data, result.length + 1, data);
    }

    if (other.data) {
        strcat_s(result.data, result.length + 1, other.data);
    }

    return result;
}

String& String::operator+=(const String& other) {
    size_t newLength = length + other.length;
    char* newData = new char[newLength + 1];

    if (data) {
        strcpy_s(newData, newLength + 1, data);
    }

    if (other.data) {
        strcat_s(newData, newLength + 1, other.data);
    }

    delete[] data;
    data = newData;
    length = newLength;

    return *this;
}

bool String::operator==(const String& other) const {
    return (length == other.length) && (std::strcmp(data, other.data) == 0);
}

bool String::operator!=(const String& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const String& str) {
    os << str.data;
    return os;
}