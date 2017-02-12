#include "SeaMammal.h"


SeaMammal::SeaMammal(const char* sound, const char* name, const char* type) :
Mammal(sound, name, type) {}

SeaMammal::~SeaMammal(){}

void SeaMammal::moves(){

	std::cout << "Dives\n";

}