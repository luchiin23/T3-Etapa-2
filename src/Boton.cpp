/*
 * Boton.cpp
 *
 *  Created on: 17 Jun 2017
 *      Author: User1
 */
#include "Boton.h"

using namespace std;

Boton::Boton(void){
	state = false;
}

void Boton::turnON(){
      state = true;    // ON
   }

void Boton::turnOFF(){
      state = false;
   }

bool Boton::getState(){
      return state;
   }

string Boton::toString() {
      return state?"1":"0";
   }


