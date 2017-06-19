/*
 * BotoneraPrimerPiso.h
 *
 *  Created on: 17 Jun 2017
 *      Author: User1
 */

#include "Boton.h"
#include "Botonera.h"


#ifndef BOTONERAPRIMERPISO_H_
#define BOTONERAPRIMERPISO_H_


class BotoneraPrimerPiso : public Botonera {
private:
	Boton up;

   public:
	bool setRequest(char s_up);
	void resetUpRequest();
	int isUpOn();
};


#endif /* BOTONERAPRIMERPISO_H_ */
