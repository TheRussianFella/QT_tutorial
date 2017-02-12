#include "Bird.h"



void Bird::moves() {

	std::cout << "Flyes\n";

}

void Bird::sound() {

	std::cout << "Squick\n";

}

Bird::Bird(const char* name, const char* type):
Animal(name,type){}

Bird::~Bird(){}
