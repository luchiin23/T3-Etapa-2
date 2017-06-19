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
	Sensor *found = NULL;
	for (unsigned int i=0;i<sensores.size();i++){
		if (sensores[i].isInRange(position)){
			*found = CajaAscensor::sensores[i];
			break;
		}
	}
	return *found;
}
/*
public class CajaAscensor {
   private ArrayList <Sensor> sensores;
   public CajaAscensor (ArrayList<Sensor> ss) {
      sensores = ss;
   }
   public Sensor findSensor(float position) {
	   	Sensor encontrado = null;
	    for(int i=0;i<sensores.size();i++){
	    	if (sensores.get(i).isInRange(position)){
	    		encontrado = sensores.get(i);
	    		break;
	    	}

	    }
	    return encontrado;
   }
}
*/
