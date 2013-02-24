/*
 * Eat.cpp
 *
 *  Created on: Feb 18, 2013
 *      Author: Kendall
 */

#include "Eat.h"
#include "Animal.h"
#include "Plant.h"

Eat::Eat() {}

Eat::~Eat() {}

void Eat::eatAnimal(animal* a1, animal* a2) {
	if (a1->returntier() == a2->returntier()) {
		a1->move();			// walk by each other...no fight
		a2->move();
	}
	else if (a1->returntier() > a2->returntier()) {
		a1->moreenergy((a2->returntier()) * SCALE + 1);		// would increase energy, decrease hunger level, etc.
		a1->lesshunger((a2->returntier()) * SCALE + 1);
		delete a2;
	} else {
		a2->moreenergy((a1->returntier()) * SCALE + 1);		// would increase energy, decrease hunger level, etc.
		a2->lesshunger((a1->returntier()) * SCALE + 1);
		delete a1;
	}
}


void Eat::eatPlant(animal* a, plant* p) {
	a->moreenergy(1);		// would increase energy, decrease hunger level, etc.
	a->lesshunger(1);
	p->goteaten();		// deplete resource a little bit
}


void Eat::eatGrass(animal* a) {
	a->moreenergy(1);		// would increase energy, decrease hunger level, etc.
	a->lesshunger(1);
}
