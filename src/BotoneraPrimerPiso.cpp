/*
 * BotoneraPrimerPiso.cpp
 *
 *  Created on: 17 Jun 2017
 *      Author: User1
 */

#include "BotoneraPrimerPiso.h"

using namespace std;


bool BotoneraPrimerPiso::setRequest(char s_up){
	bool result = false;
	if (s_up=='U'){
		result = true;
		up.turnON();
	}
	return result;
};
void BotoneraPrimerPiso::resetUpRequest(){
	up.turnOFF();
};
int BotoneraPrimerPiso::isUpOn(){
	if(up.getState()){
		return 1;
	}
	else{
		return 0;
	}
};
