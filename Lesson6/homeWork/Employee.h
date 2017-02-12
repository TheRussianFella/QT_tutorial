#pragma once
#include "Date.h"

class Employee {

	std::string m_name;
	Date m_hireDate;
	Date m_lastDay;
	int m_salary;

public:

	Employee(std::string name, int salary);
	~Employee();

	void setHireAndLastDate(const Date& hireDay);
	void showInfo();

};