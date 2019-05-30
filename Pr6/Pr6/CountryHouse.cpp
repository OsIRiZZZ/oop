#include "pch.h"
#include "CountryHouse.h"

CountryHouse::CountryHouse(double worth) :Property::Property(worth) {}

double CountryHouse::price() {
	return worth / 500;
}
