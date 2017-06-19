/*
 * Cabina.h
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#ifndef SRC_CABINA_H_
#define SRC_CABINA_H_

#include "CajaAscensor.h"

class Cabina {
public:
	Cabina(CajaAscensor,float,int);
	virtual ~Cabina();
	void move(float);
	int readFloor(void);
	void setFloor(int);
private:
	CajaAscensor shaft;
	float position;  // in meters
	int floorIndicator;
};

#endif /* SRC_CABINA_H_ */
