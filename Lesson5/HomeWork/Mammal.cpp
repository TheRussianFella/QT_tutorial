#include "Mammal.h"


Mammal::Mammal(const char* sound, const char* name, const char* type):
Animal(name, type){

	setSound(sound);

}


Mammal::~Mammal(){

	delete[] m_sound;

}

void Mammal::setSound( const char* sound){

	m_sound = new char[strlen(sound) + 1];
	strcpy_s(m_sound, strlen(sound) + 1, sound);

}

void Mammal::sound() {

	std::cout << m_sound << "\n";
}