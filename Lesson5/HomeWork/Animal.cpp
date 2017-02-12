#include "Animal.h"


Animal::Animal(const char* name, const char* type){

	m_name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);

	m_type = new char[strlen(type) + 1];
	strcpy_s(m_type, strlen(type) + 1, type);

}


Animal::~Animal(){

	delete[] m_name;
	delete[] m_type;

}

void Animal::setName(const char* name){

	delete[] m_name;
	m_name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);

}

void Animal::displayInfo() {

	std::cout << "********\n";
	std::cout << "Name: " << m_name << "\n";
	std::cout << "Type: " << m_type << "\n";
	std::cout << "Sound: "; sound();
	std::cout << "Movement: "; moves();
	std::cout << "********\n\n";

}

int Animal::len() {

	int count = 0;

	while (m_name[count] != '\0')
		count++;

	return count + 1;

}
