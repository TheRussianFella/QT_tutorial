#include "Flower.h"


Flower::Flower(){

	m_honey = rand() % 10 + 1;

}


Flower::~Flower(){}

int Flower::giveHoney(int honey){

	if (honey >= m_honey){

		int g_honey = m_honey;
		m_honey = 0;
		return g_honey;

	}
	else {

		m_honey -= honey;
		return honey;

	}

}
