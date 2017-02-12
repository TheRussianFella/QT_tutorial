#include"Employee.h"

Employee::Employee(std::string name, int salary) : m_name(name), m_salary(salary) {}

Employee::~Employee(){}

void Employee::setHireAndLastDate(const Date& hireDate) {

	int dates[2][12] = { { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };


	m_hireDate = hireDate;

	int days = 99;

	int year = m_hireDate.getYear();
	int month = m_hireDate.getMonth();
	int day = m_hireDate.getDay();

	int mark;

	if (year % 4 == 0)
		mark = 1;
	else
		mark = 0;

	while (days != 0) {

		day++;
		days--;

		if (day > 31 && (month == 12)) {

			year++;
			month = 1;
			day = 1;

			if (year % 4 == 0)
				mark = 1;
			else
				mark = 0;


		} else if (day > dates[mark][month - 1]) {

			day = 1;
			month++;

		}

	}

	m_lastDay.setYear(year);
	m_lastDay.setMonth(month);
	m_lastDay.setDay(day);

}

void Employee::showInfo() {

	std::string header = "***" + m_name + "***\n\n";

	std::cout << header;
	std::cout << "Hire date: "; m_hireDate.displayDate();
	std::cout << "Last day: "; m_lastDay.displayDate();
	std::cout << "Salary: " << m_salary << "\n\n";

	for (int i = 0; i < header.length() - 2; ++i)
		std::cout << "*";

	std::cout << "\n\n";
}