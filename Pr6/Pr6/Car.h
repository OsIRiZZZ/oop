#ifndef _CAR_H
#define _CAR_H
#include "Property.h"
class Car : public Property {
public:
	Car(double);
	double price() override;
};

#endif // !_CAR_H#pragma once
