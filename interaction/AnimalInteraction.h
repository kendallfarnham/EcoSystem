/*
 * AnimalInteraction.h
 *
 *  Created on: Feb 22, 2013
 *      Author: Kendall
 */

#ifndef ANIMALINTERACTION_H_
#define ANIMALINTERACTION_H_
#include "Animal.h"
#include "DoublyLinkedList.h"

class AnimalInteraction {
	DoublyLinkedList<animal>* animalDLL;
	int length;

public:
	AnimalInteraction() {
		animalDLL = new DoublyLinkedList<animal>;
		length = 0;
	}
	DoublyLinkedList<animal>* getAnimalDLL();
	int getLength();
	void createAnimal();
	void removeAnimal(animal*);
	animal* getFirstAnimal();
	animal* getLastAnimal();
	animal* findTarget(animal*);
	int findDistance(int,int,int,int);
	virtual ~AnimalInteraction();
};

#endif /* ANIMALINTERACTION_H_ */
