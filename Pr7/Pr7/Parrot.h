#include "Animal.h"

#ifndef _PARROT_H
#define _PARROT_H


class Parrot : public Animal 
{
public:
	Parrot();
	void Voice() override;
};

#endif // !_PARROT_H