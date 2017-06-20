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
	Sensor(const Sensor&);
	Sensor(void);
	virtual ~Sensor();
	bool isInRange(float);
	void activateAction(void);
	void deactivateAction(void);
	int isActivated(void);
	float getPosition(void);

};

#endif /* SRC_SENSOR_H_ */
