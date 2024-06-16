#ifndef SCIENCESTUDENT_H
#define SCIENCESTUDENT_H

#include "student.h"
#include <iostream>

namespace University
{
	class ScienceStudent : public Student 
	{
	public:
		ScienceStudent();
		ScienceStudent(string theUniversity, int theNumber, UniversityStaff theProctor, 
			string theDiscipline, string theCourse);
		string getDiscipline() const;
		string getCourse() const;
		void setDiscipline(const string& discipline);
		void setCourse(const string& courseType);
		ScienceStudent& operator=(const ScienceStudent& rtSide);
	private:
		string discipline;
		string course;
	};
}
#endif