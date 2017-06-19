/*
 * Sensor.h
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#ifndef SRC_SENSOR_H_
#define SRC_SENSOR_H_

class Sensor {
private:
	float position;
	int floorheight;
	bool active;
public:
	Sensor(float,int);
	virtual ~Sensor();
	bool isInRange(float);
	void activateAction(void);
	void deactivateAction(void);
	bool isActivated(void);
};

#endif /* SRC_SENSOR_H_ */
