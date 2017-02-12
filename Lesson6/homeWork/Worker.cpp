#include "Worker.h"

Worker::Worker(int honey, int weight, int sizeOfField ) : Bee(honey, weight),  m_sizeOfField(sizeOfField){

	m_field = new Flower*[m_sizeOfField];

	while (true) {

		for (int i = 0; i < m_sizeOfField; ++i)
			m_field[i] = new Flower();

		if (countHoney() < getDesired()) {

			for (int i = 0; i < m_sizeOfField; ++i)
				delete m_field[i];

		}
		else
			break;
			
	}
}


Worker::~Worker(){

	for (int i = 0; i < m_sizeOfField; ++i)
		delete m_field[i];
	delete m_field;
}

void Worker::goForHoney(Flower* flower){

	decreaseDesired(flower->giveHoney(getDesired()));

}

bool Worker::isReady() {

	return(getDesired() == 0);

}

Flower* Worker::genFlower() {

	return m_field[rand() % m_sizeOfField];

}

int Worker::seekForHoneyAndShowTries() {

	int trys = 0;

	while (!isReady()) {

		goForHoney( genFlower() );
		trys++;

	}

	return trys;
}

int Worker::countHoney() {

	int sum = 0;

	for (int i = 0; i < m_sizeOfField; ++i)
		sum += m_field[i]->showHoney();

	return sum;
}
