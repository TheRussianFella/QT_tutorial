#include "Queen.h"


Queen::Queen(int weight, int desired, int size): 
Bee(desired, weight), m_squadSize(size){

	m_squad = new Worker*[m_squadSize];

	for (int i = 0; i < m_squadSize; ++i)
		m_squad[i] = new Worker(desired, weight / 2, 10);

}


Queen::~Queen(){

	for (int i = 0; i < m_squadSize; ++i)
		delete m_squad[i];

	delete m_squad;
}

void Queen::sendAndReport() {

	int* trys = getHoney();

	std::cout << "Queen reporting! \n\n";
	for (int i = 0; i < getSize(); ++i) {
		
		std::cout << "Bee #" << i << " went to flowers " << trys[i] << " times!\n";

	}

	delete trys;

	std::cout << "\nEnd of the report sir!\n\n";
	system("pause");
}

int* Queen::getHoney() {

	int* trys = new int[m_squadSize];

	for (int i = 0; i < m_squadSize; ++i)
		trys[i] = m_squad[i]->seekForHoneyAndShowTries();

	return trys;
}
