#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>

class TV
{

	static int m_count;
	int m_price;
	char* m_name;
    static int m_sum;

public:

	TV(const char* name, int price);
	TV(const char* name);
	TV(int price);
	TV(const TV& other);
	TV();

    TV& operator = (const TV& other);

	~TV();

    void PrintAll();

    bool operator == (const TV& a);
    bool operator > (const TV& a);
    bool operator < (const TV& a);

    static int CountAll(){return m_count;}
    static int SumAll(){return m_sum;}

};

