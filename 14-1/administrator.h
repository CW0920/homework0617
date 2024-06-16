#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "salariedemployee.h"
#include <string>

using std::string;

namespace SavitchEmployees 
{
	class Administrator : public SalariedEmployee 
	{
	public:
		Administrator();
		Administrator(const string& theName, const string& theSsn,
			double theWeeklySalary,
			const string& NewTitle, const string& NewArea, const string& NewSupervisor);
		void setSupervisor(const string& name);
		void readAdministrator();
		void print()const;
		void printCheck();
	private:
		string title;
		string area;
		string supervisor;
	};
}


#endif