/*
 * CajaAscensor.h
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#ifndef SRC_CAJAASCENSOR_H_
#define SRC_CAJAASCENSOR_H_
#include "Sensor.h"
#include <iostream>
#include <vector>

class CajaAscensor {
public:
	CajaAscensor(std::vector <Sensor>);
	CajaAscensor();
	virtual ~CajaAscensor();
	void findSensor(Sensor&, float);

private:
	std::vector<Sensor> sensores;

};

#endif /* SRC_CAJAASCENSOR_H_ */
