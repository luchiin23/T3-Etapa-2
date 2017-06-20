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

void CajaAscensor::findSensor(Sensor &ref, float position){

	//cout << "find sensor";
	vector<Sensor>::iterator it;
	for (it=sensores.begin();it!=sensores.end();++it){
		//cout << it->getPosition()<<endl;
		//cout << i << endl;
		if (it->isInRange(position)){
			*ref=it._M_current;
			//return ref;
			break;
		}
	}
	//return ref;
}
