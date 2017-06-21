/*
 * Cabina.cpp
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#include "Cabina.h"

using namespace std;
Cabina::Cabina(CajaAscensor caja, float pos,int fi){
	shaft=caja;
	position = 0;
	floorIndicator = fi;
	last=NULL;
}
Cabina::Cabina(){
	//shaft=0;
	position = 0;
	floorIndicator = 1;
	last=NULL;
}


Cabina::~Cabina() {
	// TODO Auto-generated destructor stub
}

void Cabina::move(int &sensorpiso, float delta){
	shaft.findSensor(sensorpiso,position);
	Cabina::setFloor(sensorpiso);
	position += delta;
}

float Cabina::getPosition(){
	if (position<0.1)
		position = 0;
	return position;
}

void Cabina::setFloor(int floor){
	floorIndicator = floor;
}

int Cabina::readFloor(){
	return floorIndicator;
}
