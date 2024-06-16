#include "student.h"
namespace University
{
	Student::Student() :UniversityName("No university yet"), RegistrationNumber(0), proctor() {  }
	Student::Student(string NewUniversity, int NewNumber, UniversityStaff NewProctor)
		:UniversityName(NewUniversity), RegistrationNumber(NewNumber), proctor(NewProctor) {  }
	Student::Student(const Student& theStudent)
		:UniversityName(theStudent.UniversityName), RegistrationNumber(theStudent.RegistrationNumber),
		proctor(theStudent.proctor) {  }
	string Student::getUniversityName() const { return UniversityName; }
	int Student::getRegistrationNumber() const { return RegistrationNumber; }
	UniversityStaff Student::getProctor() const { return proctor; }
	void Student::setUniversityName(const string& NewName) {
		UniversityName = NewName;
	}
	void Student::setRegistrationNumber(int NewNumber) {
		RegistrationNumber = NewNumber;
	}
	void Student::setProctor(const UniversityStaff& NewProctor) {
		proctor = NewProctor;
	}
	Student& Student::operator=(const Student& rtSide) {
		UniversityName = rtSide.UniversityName;
		RegistrationNumber = rtSide.RegistrationNumber;
		proctor = rtSide.proctor;
		return *this;
	}
}