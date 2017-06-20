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
Sensor::Sensor(const Sensor& ref){
	position = ref.position;
	floorheight = ref.floorheight;
	active = ref.active;
}
Sensor::Sensor(){
	position = 1000;
	floorheight = 1000;
	active = false;
}

Sensor::~Sensor() {
	// TODO Auto-generated destructor stub
}

float Sensor::getPosition(){
	return this->position;
}
int Sensor::getFloor(){
	return this->floorheight;
}
bool Sensor::isInRange(float h){
	if(((position-0.5)<h) & (h<(position+0.5))){
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

int Sensor::isActivated(){
       // to be completed
	   return active?1:0;//return active;
}
