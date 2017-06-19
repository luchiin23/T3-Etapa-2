/*
 * BotoneraPisoIntermedio.cpp

 *
 *  Created on: 17 Jun 2017
 *      Author: User1
 */

#include "BotoneraPisoIntermedio.h"
using namespace std;


bool BotoneraPisoIntermedio::setRequest(char up_down){
	if (up_down=='U')
		up.turnON();
	else if (up_down=='D')
		down.turnON();
	else
		return false;
	return true;
};
void BotoneraPisoIntermedio::resetUpRequest(){
		up.turnOFF();
	};
void BotoneraPisoIntermedio::resetDownRequest(){
		down.turnOFF();
	};
int BotoneraPisoIntermedio::isUpOn(){
		if(up.getState()){
			return 1;
		}
		else{
			return 0;
		}
	};
int BotoneraPisoIntermedio::isDownOn(){
		if(down.getState()){
			return 1;
		}
		else{
			return 0;
		}
	};

