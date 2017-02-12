#include "Date.h"

Date::Date() : m_year(2000), m_month(1), m_day(1) {};

Date::Date(int year, int month, int day){

	int dates[2][12] = { { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };

	int mark;

	if (year <= 0)
		year = 2016;
	if (month <= 0)
		month = 1;
	if (day <= 0)
		day = 1;

	if (year % 4 == 0)
		mark = 1;
	else
		mark = 0;

	if (month > 12)
		month = 12;

	if (day > dates[mark][month - 1]) {

		day = dates[mark][month - 1];

	}

	m_year = year;
	m_month = month;
	m_day = day;

};

Date::~Date() {};

void Date::displayDate() {

	if (m_day < 10)
		std::cout << "0" << m_day << ".";
	else
		std::cout << m_day << ".";

	if(m_month < 10)
		std::cout << "0" << m_month << ".";
	else
		std::cout << m_month << ".";

	std::cout << m_year << "\n";

}

void Date::operator= (const Date& other) {

	m_year = other.getYear();
	m_month = other.getMonth();
	m_day = other.getDay();

};