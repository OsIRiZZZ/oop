#include "pch.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include <iostream>

int main()
{
	Dog dog;
	Cat cat;
	Parrot parrot;
	cout << "Dog says: ";
	dog.Voice();
	cout << "Cat says: ";
	cat.Voice();
	cout << "Parrot says: ";
	parrot.Voice();
}