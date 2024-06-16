#include <iostream>
#include <string>
#include "administrator.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

namespace SavitchEmployees 
{
	Administrator::Administrator():SalariedEmployee(),
		title("No title yet"), area("No area yet"), supervisor("No supervisor yet") 
	{
		//empty
	}
	Administrator::Administrator(const string& newName, const string& newNumber,
		double newWeeklyPay,
		const string& NewTitle, const string& NewArea, const string& NewSupervisor)
		:SalariedEmployee(newName, newNumber, newWeeklyPay), 
		title(NewTitle), area(NewArea), supervisor(NewSupervisor) 
	{
		//empty
	}
	void Administrator::setSupervisor(const string& NewSupervisor) {
		supervisor = NewSupervisor;
	}
	void Administrator::readAdministrator() {
		string in_name, in_number, in_supervisor;
		double in_salary;

		cout << "Enter the name: ";
		cin >> in_name;
		setName(in_name);

		cout << "Enter the ssn: ";
		cin >> in_number;
		setSsn(in_number);

		cout << "Enter the salary: ";
		cin >> in_salary;
		setSalary(in_salary);

		cout << "Enter the title: ";
		cin >> title;

		cout << "Enter the area of responsibility: ";
		cin >> area;

		cout << "Enter the name of the immediate supervisor: ";
		cin >> in_supervisor;
		setSupervisor(in_supervisor);
	}
	void Administrator::print()const {
		cout << "Name: " << getName() << endl
			<< "SSN: " << getSsn() << endl
			<< "Salary:" << getSalary() << endl
			<< "Title: " << title << endl
			<< "Responsibility: " << area << endl
			<< "Supervisor: " << supervisor << endl;
	}
	void Administrator::printCheck() {
		setNetPay(getSalary());
		cout << "\n__________________________________________________\n";
		cout << "Pay to the order of " << getName() << endl;
		cout << "The sum of " << getNetPay() << " Dollars\n";
		cout << "_________________________________________________\n";
		cout << "Check Stub NOT NEGOTIABLE \n";
		cout << "Employee Number: " << getSsn() << endl;
		cout << "Administrator. Regular Pay: " << getSalary() << endl;
		cout << "Title: " << title << endl;
		cout << "Area of Responsibility: " << area << endl;
		cout << "Immediate Supervisor: " << supervisor << endl;
		cout << "_________________________________________________\n";
	}
}