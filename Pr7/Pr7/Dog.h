#include "Animal.h"

#ifndef _DOG_H
#define _DOG_H

class Dog : public Animal {
public:
	Dog();
	void Voice() override;
};

#endif // !_DOG_!
