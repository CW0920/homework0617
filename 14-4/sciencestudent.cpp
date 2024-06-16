#include "sciencestudent.h"

namespace University
{
	ScienceStudent::ScienceStudent() :Student(), discipline("No decipline yet"), course("No course yet") {  }
	ScienceStudent::ScienceStudent(string NewUniversity, int NewNumber, UniversityStaff NewProctor,
		string NewDiscipline, string NewCourse)
		:Student(NewUniversity, NewNumber, NewProctor), discipline(NewDiscipline), course(NewCourse) {  }
	string ScienceStudent::getDiscipline() const { return discipline; }
	string ScienceStudent::getCourse() const { return course; }
	void ScienceStudent::setDiscipline(const string& NewDiscipline) {
		discipline = NewDiscipline;
	}
	void ScienceStudent::setCourse(const string& NewCourse) {
		course = NewCourse;
	}
	ScienceStudent& ScienceStudent::operator=(const ScienceStudent& rtSide) {
		if (this != &rtSide){
			Student::operator=(rtSide);
			discipline = rtSide.discipline;
			course = rtSide.course;
		}
		return *this;
	}

}