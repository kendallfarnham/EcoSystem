/*
 * Eat.h
 *
 *  Created on: Feb 18, 2013
 *      Author: Kendall
 */

#ifndef EAT_H_
#define EAT_H_
#define SCALE 4
#include "Animal.h"
#include "Plant.h"

class Eat {
public:
	Eat();
	void eatAnimal(animal*, animal*);
	void eatPlant(animal*, plant*);
	void eatGrass(animal*);
	virtual ~Eat();
};

#endif /* EAT_H_ */
