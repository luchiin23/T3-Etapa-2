/*
 * BotoneraPisoIntermedio.h
 *
 *  Created on: 17 Jun 2017
 *      Author: User1
 */

#include "Boton.h"
#include "Botonera.h"

#ifndef BOTONERAPISOINTERMEDIO_H_
#define BOTONERAPISOINTERMEDIO_H_


class BotoneraPisoIntermedio : public Botonera {
private:
	Boton up, down;

   public:
	bool setRequest(char up_down);
	void resetUpRequest();
	void resetDownRequest();
	int isUpOn();
	int isDownOn();
};



#endif /* BOTONERAPISOINTERMEDIO_H_ */
