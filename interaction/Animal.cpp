/*
 * Animal.cpp
 *
 *  Created on: Feb 24, 2013
 *      Author: Kendall
 */

#include "Animal.h"

animal::animal() {}
animal::~animal() {}

int animal::getmyx() {
	return myx;
}
int animal::getmyy() {
	return myy;
}

int animal::returntier() {
	return tier;
}

void animal::move() {}

void animal::moreenergy(float a) {}
void animal::lesshunger(float a) {}
