/*
 * BotoneraUltimoPiso.cpp
 *
 *  Created on: 17 Jun 2017
 *      Author: User1
 */

#include "BotoneraUltimoPiso.h"
using namespace std;


bool BotoneraUltimoPiso::setRequest(char s_down){
	bool result = false;
	  if (s_down=='D'){
		  result = true;
		  down.turnON();
	  }
		  return result;
};
void BotoneraUltimoPiso::resetDownRequest(){
			down.turnOFF();
};
int BotoneraUltimoPiso::isDownOn(){
		if(down.getState()){
			return 1;
		}
		else{
			return 0;
		}
	};



