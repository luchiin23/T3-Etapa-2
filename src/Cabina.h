/*
 * Cabina.h
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#ifndef SRC_CABINA_H_
#define SRC_CABINA_H_

#include <iostream>
#include "CajaAscensor.h"
#include "Sensor.h"

class Cabina {
public:
	Cabina(CajaAscensor,float,int);
	Cabina(void);
	virtual ~Cabina();
	void move(Sensor&, float);
	int readFloor(void);
	float getPosition(void);
	void setFloor(int);
private:
	CajaAscensor shaft;
	float position;  // in meters
	int floorIndicator;
	Sensor *last;
};

#endif /* SRC_CABINA_H_ */
