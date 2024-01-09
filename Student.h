
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student(string name, int age, string studentId);
    virtual void displayInfo() const;

private:
    string name;
    int age;
    string studentId;
};
