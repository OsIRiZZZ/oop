
#include "pch.h"
#include "Dog.h"

Dog::Dog() : Animal::Animal("Woooooooooooooooooooooooof") {}

void Dog::Voice() {
	cout << sound << endl;
}