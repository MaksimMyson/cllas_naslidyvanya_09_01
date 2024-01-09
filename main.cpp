
#include "Student.h"
#include "Aspirant.h"

int main() {
    Student student("John Doe", 20, "S12345");
    cout << "Student Information:\n";
    student.displayInfo();
    cout << "\n";

    Aspirant aspirant("Alice Smith", 25, "A67890", "Machine Learning");
    cout << "Aspirant Information:\n";
    aspirant.displayInfo();

    return 0;
}
