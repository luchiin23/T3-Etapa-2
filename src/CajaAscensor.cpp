/*
 * CajaAscensor.cpp
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#include "CajaAscensor.h"

using namespace std;

CajaAscensor::CajaAscensor(vector <Sensor> &ss) {
	sensores = &ss;
}

CajaAscensor::CajaAscensor() {
	sensores = NULL;
}

CajaAscensor::~CajaAscensor() {
	// TODO Auto-generated destructor stub
}

void CajaAscensor::findSensor(int &i,float position){
	vector<Sensor>::iterator it;
	for (it=sensores->begin();it!=sensores->end();++it){
		if (it->isInRange(position)){
			i = it->getFloor();
			break;
		}
	}
}
