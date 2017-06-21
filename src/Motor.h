/*
 * Motor.h
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */
#include <iostream>
#include "Cabina.h"

#ifndef SRC_MOTOR_H_
#define SRC_MOTOR_H_

class Motor {
private:

public:
	Motor(Cabina&,float);
	Motor();
	virtual ~Motor();
	int UP;
	int DOWN;
	int PAUSED;
	int STOPPED;
	int state;
	void lift();
	void lower();
	void stop();
	void pause();
	int getState();
	void muevete(int&);
private:
	Cabina* cabina;
	float deltaHight;

};

#endif /* SRC_MOTOR_H_ */
