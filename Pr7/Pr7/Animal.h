
#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string>
#include <iostream>

using namespace std;

class Animal {
public:
	Animal(string);
	virtual void Voice() = 0;
protected:
	string sound;
};
#endif // !_ANIMAL_H