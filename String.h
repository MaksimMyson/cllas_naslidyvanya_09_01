#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {
protected:
    char* data;
    size_t length;

public:
    String();
    String(const char* cstr);
    String(const String& other);
    ~String();

    String& operator=(const String& other);

    size_t getLength() const;
    void clear();

    String operator+(const String& other) const;
    String& operator+=(const String& other);

    bool operator==(const String& other) const;
    bool operator!=(const String& other) const;

    friend std::ostream& operator<<(std::ostream& os, const String& str);
};

#endif // STRING_H