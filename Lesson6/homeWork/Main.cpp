#include "Employee.h"

int main() {

	Employee employee("Masha Rubanova", 30000);

	Date firstDay(2011, 23 , 12);
	Date firstDay1(2012, 23, 12);

	employee.setHireAndLastDate(firstDay);

	employee.showInfo();


	employee.setHireAndLastDate(firstDay1);

	employee.showInfo();

	system("pause");

	return 0;
}