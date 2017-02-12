#include "TV.h"

TV::TV(const char* name, int price){

	m_name = new char[strlen(name) + 1];
    strcpy(m_name, name);

	m_price = price;

	m_count++;
    m_sum += m_price;

}

TV::TV(const char* name){

	m_name = new char[strlen(name) + 1];
    strcpy(m_name, name);

	m_price = 5000;

	m_count++;
    m_sum += m_price;

}


TV::TV(int price){

	m_name = new char[4];
    strcpy(m_name, "Sony");

	m_price = price;

	m_count++;
    m_sum += m_price;

}

TV::TV(){

	m_name = new char[4];
    strcpy(m_name, "Sony");

	m_price = 40000;

	m_count++;
    m_sum += m_price;

}

TV::TV(const TV& other){

	m_price = other.m_price;

	m_name = new char[strlen(other.m_name) + 1];
    strcpy(m_name, other.m_name);

	m_count++;
    m_sum += m_price;

}

TV& TV::operator= (const TV& other){

    if (this != &other) {

		delete[] m_name;
        m_name = new char[strlen(other.m_name) + 1];
        strcpy(m_name, other.m_name);

        m_sum += other.m_price-m_price;

        m_price = other.m_price;

	}

    return *this;
}

TV::~TV(){

    m_sum -= m_price;
	delete[] m_name;
	m_count--;

}

int TV::m_count = 0;

void TV:: PrintAll(){

    std::cout<<"***TV***\n";
    std::cout<<m_name<<"\n";
    std::cout<<m_price<<"\n";
    std::cout<<"********\n\n";

}

bool TV::operator ==(const TV& a){

    return (m_price == a.m_price);
}

bool TV::operator <(const TV& a){

    return (m_price < a.m_price);

}

bool TV::operator >(const TV& a){

    return (m_price > a.m_price);

}

int TV::m_sum = 0;
