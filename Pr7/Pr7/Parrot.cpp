#include "pch.h"
#include "Parrot.h"

Parrot::Parrot() : Animal::Animal("SQuick") {}

void Parrot::Voice() {
	cout << sound << endl;
}