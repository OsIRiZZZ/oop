#include "Animal.h"


#ifndef _CAT_H
#define _CAT_H


class Cat :Animal {
public:
	Cat();
	void Voice() override;
};

#endif // !_CAT_H