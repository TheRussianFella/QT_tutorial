#include "Bird.h"
#include "Fish.h"
#include "SeaMammal.h"
#include "TerraMammal.h"

const int len = 4;

char* maxName(Animal* zoo[]) {

	int nMax = 0;
	int lenMax = 0;

	for (int i = 0; i < len; ++i) {

		if (zoo[i]->len() > lenMax) {

			lenMax = zoo[i]->len();
			nMax = i;

		}
	}

	return zoo[nMax]->getName();

}

int main() {

	Animal* zoo[] = { new Bird("Chack", "Eagle"), new Fish("Bill","Shark"), new SeaMammal("Uhhh", "Charlin","Wale"), new TerraMammal("Woof", "Sharik", "Dog") };

	for (Animal* animal : zoo)
		animal->displayInfo();

	zoo[0]->setName("Sam");
	zoo[0]->displayInfo();

	char* longestName = maxName(zoo);
	std::cout << "Longest name: " << longestName << "\n";

	int nMax = 0;
	int lenMax = 0;

	for (int i = 0; i < len; ++i) {

		if (zoo[i]->len() > lenMax) {

			lenMax = zoo[i]->len();
			nMax = i;

		}
	}

	std::cout << "Biggest name: " << zoo[nMax]->getName() << "\n";

	for (Animal* animal : zoo)
		delete animal;

	system("pause");

}