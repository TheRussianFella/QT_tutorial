#include "Fish.h"



Fish::Fish(const char* name, const char* type):
Animal(name, type){}


Fish::~Fish(){}

void Fish::moves() {

	std::cout << "Swims\n";

}

void Fish::sound() {

	std::cout << "Nothing\n";

}
