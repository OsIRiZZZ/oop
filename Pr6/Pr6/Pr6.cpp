#include "pch.h"
#include <iostream>
#include "Appartment.h"
#include "Car.h"
#include "CountryHouse.h"

int main()
{
	Property ** property = new Property *[7];
	property[0] = &Appartment(100000);
	property[1] = &Appartment(1500000);
	property[2] = &Appartment(300000);
	property[3] = &Car(70000);
	property[4] = &Car(60000);
	property[5] = &CountryHouse(800000);
	property[6] = &CountryHouse(700000);

	double sum = 0;

	for (int i = 0; i < 7; i++) {
		sum += property[i]->price();
	}

	std::cout << "Summ of prices is " << sum;

	delete(property);
}