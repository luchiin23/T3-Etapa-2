/*
 * Boton.h
 *
 *  Created on: 17 Jun 2017
 *      Author: User1
 */
#include <string>
#ifndef BOTON_H_
#define BOTON_H_

class Boton {
   private:
	bool state;
   public:
	Boton();
	void turnON();
	void turnOFF();
	bool getState();
	std::string toString();
};




#endif /* BOTON_H_ */
