/*
 * Cabina.cpp
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */
#include <iostream>
#include "Cabina.h"

using namespace std;
Cabina::Cabina(CajaAscensor caja, float pos,int fi){
	shaft=caja;
	position = pos;
	floorIndicator = fi;
}

Cabina::~Cabina() {
	// TODO Auto-generated destructor stub
}

