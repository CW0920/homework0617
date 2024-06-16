#ifndef STUDENT_H
#define SUTDENT_H

#include <string>
#include "universitystaff.h"
using std::string;
namespace University
{
	class Student 
	{
	public:
		Student();
		Student(string theUniversity, int theNumber, UniversityStaff theProctor);
		Student(const Student& theStudent);
		string getUniversityName() const;
		int getRegistrationNumber() const;
		UniversityStaff getProctor() const;
		void setUniversityName(const string& theName);
		void setRegistrationNumber(int theNumber);
		void setProctor(const UniversityStaff& theProctor);
		Student& operator=(const Student& rtSide);
	private:
		string UniversityName;
		int RegistrationNumber;
		UniversityStaff proctor;
	};
}

#endif
