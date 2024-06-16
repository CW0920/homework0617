#include <iostream>
#include "sciencestudent.h"

using namespace University;
using namespace std;

int main(void) {
	UniversityStaff proctor("Dr. Smith");
	ScienceStudent student1("NUTN", 12345, proctor, "Physics", "Undergraduate");

    cout << "Student 1 Information:" << endl;
    cout << "University: " << student1.getUniversityName() << endl;
    cout << "Registration Number: " << student1.getRegistrationNumber() << endl;
    cout << "Proctor: " << student1.getProctor().getName() << endl;
    cout << "Science Discipline: " << student1.getDiscipline() << endl;
    cout << "Course Type: " << student1.getCourse() << endl;

    ScienceStudent student2 = student1;
    cout << "\nStudent 2 Information (copy of Student 1):" << endl;
    cout << "University: " << student2.getUniversityName() << endl;
    cout << "Registration Number: " << student2.getRegistrationNumber() << endl;
    cout << "Proctor: " << student2.getProctor().getName() << endl;
    cout << "Science Discipline: " << student2.getDiscipline() << endl;
    cout << "Course Type: " << student2.getCourse() << endl;

    return 0;
}