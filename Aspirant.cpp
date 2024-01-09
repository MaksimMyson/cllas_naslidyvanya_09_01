
#include "Aspirant.h"

Aspirant::Aspirant(string name, int age, string studentId, string researchTopic)
    : Student(name, age, studentId), researchTopic(researchTopic) {}

void Aspirant::displayInfo() const {
    Student::displayInfo();
    cout << "Research Topic: " << researchTopic << "\n";
}
