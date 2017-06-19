/*
 * BotoneraUltimoPiso.h
 *
 *  Created on: 17 Jun 2017
 *      Author: User1
 */
#include "Boton.h"
#include "Botonera.h"
#ifndef BOTONERAULTIMOPISO_H_
#define BOTONERAULTIMOPISO_H_


class BotoneraUltimoPiso : public Botonera {
private:
	Boton down;

   public:
	bool setRequest(char s_down);
	void resetDownRequest();
	int isDownOn();
};


#endif /* BOTONERAULTIMOPISO_H_ */
