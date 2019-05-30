#include "pch.h"
#include "Cat.h"

Cat::Cat() : Animal::Animal("Meow") {}

void Cat::Voice() {
	cout << sound << endl;
}