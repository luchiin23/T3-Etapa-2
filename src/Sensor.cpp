/*
 * Sensor.cpp
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#include "Sensor.h"
#include <iostream>

using namespace std;
Sensor::Sensor(float pos, int piso) {
	position = pos;
	floorheight = piso;
	active = false;
}

Sensor::~Sensor() {
	// TODO Auto-generated destructor stub
}


bool Sensor::isInRange(float h){
	if(((position-0.05)<h) & (h<(position+0.05))){
		activateAction();
		return true;
	}
	else{
		deactivateAction();
	}
	return false;
}

void Sensor::activateAction(void){
	active = true;
}

void Sensor::deactivateAction(void){
	active = false;
}

