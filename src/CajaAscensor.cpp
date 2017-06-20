/*
 * CajaAscensor.cpp
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#include "CajaAscensor.h"

using namespace std;

CajaAscensor::CajaAscensor(vector <Sensor> ss) {
	sensores = ss;
}

CajaAscensor::CajaAscensor() {
}

CajaAscensor::~CajaAscensor() {
	// TODO Auto-generated destructor stub
}

Sensor CajaAscensor::findSensor(float position){
	Sensor x;
	//cout << "find sensor";
	vector<Sensor>::iterator it;
	for (it=sensores.begin();it!=sensores.end();++it){
		//cout << it->getPosition()<<endl;
		//cout << i << endl;
		if (it->isInRange(position)){
			Sensor* found = new Sensor();
			return *found;
			break;
		}
	}
	return x;
}
