#include "Cylinder.h"


Cylinder::Cylinder(int N){

	m_pCircle = new Circle();

	quant = new Circle* [N];

	for (int i = 0; i < N; ++i)
		quant[i] = m_pCircle;

	m_hight = m_pCircle->getThick() * N;
	m_quant = N;

}


Cylinder::~Cylinder(){

	delete quant;

}

void const Cylinder::printCylinder  (){

	std::cout << "Cylinder: \n";

	for (int i = 0; i < getQuant(); ++i){

		std::cout << "Circle #" << i << " : x = " << m_pCircle->getXCenter() << " y = " << m_pCircle->getYCenter() << "\n";

	}

	std::cout << "\n";

}

void Cylinder::decrease(){

	int oldQuant = getQuant();
	setQuant(getQuant() / 2);

	Circle** arr = new Circle*[getQuant()];

	for (int i = 0; i < getQuant(); ++i){

		arr[i] = quant[i];
		
	}

	delete quant;

	quant = arr;

}
