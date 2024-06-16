#include "universitystaff.h"

namespace University
{
	UniversityStaff::UniversityStaff() :name("No name yet") {  }
	UniversityStaff::UniversityStaff(string NewName) :name(NewName) {  }
	UniversityStaff::UniversityStaff(const UniversityStaff& theObject) :name(theObject.name) {  }
	string UniversityStaff::getName() const { return name; }
	UniversityStaff& UniversityStaff::operator=(const UniversityStaff& rtSide) {
		if (this != &rtSide) {
			name = rtSide.name;
		}
		return *this;
	}
	istream& operator >>(istream& inStream, UniversityStaff& staffObject) {
		inStream >> staffObject.name;
		return inStream;
	}
	ostream& operator <<(ostream& outStream, const UniversityStaff& staffObject) {
		outStream << staffObject.name;
		return outStream;
	}
}

