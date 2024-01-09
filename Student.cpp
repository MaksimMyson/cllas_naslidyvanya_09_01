
#include "Student.h"

Student::Student(string name, int age, string studentId)
    : name(name), age(age), studentId(studentId) {}

void Student::displayInfo() const {
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Student ID: " << studentId << "\n";
}
