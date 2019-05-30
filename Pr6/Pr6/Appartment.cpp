#include "pch.h"
#include "Appartment.h"

Appartment::Appartment(double worth) :Property(worth) {}

double Appartment::price() {
	return worth / 1000;
}
