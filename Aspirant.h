
#pragma once
#include "Student.h"

class Aspirant : public Student {
public:
    Aspirant(string name, int age, string studentId, string researchTopic);
    void displayInfo() const override;

private:
    string researchTopic;
};
