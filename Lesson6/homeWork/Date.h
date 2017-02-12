#pragma once
#include<string>
#include <iostream>
#include <cstdlib>

class Date {

	int m_year;
	int m_month;
	int m_day;

public:

	Date();
	Date(int year, int month, int day);
	~Date();

	const int getYear() const { return m_year; };
	void setYear(int year) { m_year = year; };

	const int getMonth() const { return m_month; };
	void setMonth(int month) { m_month = month; };

	const int getDay() const { return m_day; };
	void setDay(int day) { m_day = day; };

	void incrementYear() { m_year++; };
	void incrmentMonth() { m_month++; };
	void incrmentDay() { m_day++; };

	void displayDate();

	void operator= (const Date& other);

};