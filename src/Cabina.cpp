/*
 * Cabina.cpp
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#include "Cabina.h"

using namespace std;
Cabina::Cabina(CajaAscensor caja, float pos,int fi){
	shaft=caja;
	position = 0;
	floorIndicator = fi;
	last=NULL;
}
Cabina::Cabina(){
	//shaft=0;
	position = 0;
	floorIndicator = 1;
	last=NULL;
}


Cabina::~Cabina() {
	// TODO Auto-generated destructor stub
}

void Cabina::move(float delta){
	position += delta;
	shaft.findSensor(position);
	//cout << "found" << endl;
}

float Cabina::getPosition(){
	return position;
}

void Cabina::setFloor(int floor){
	floorIndicator = floor;
}

int Cabina::readFloor(){
	return floorIndicator;
}
/*
 *  public Cabina (BotoneraCabina bc, CajaAscensor caja) {
      Random generator = new Random();
      botonera = bc;
      shaft = caja;
      position = generator.nextFloat();   //it starts between 0 an 1 [m]
      floorIndicator=1;
   }
   public void move(float delta) {
      // to be completed
	  Sensor sensor;
	  position+=delta;
	  sensor=shaft.findSensor(position);
	  // to be completed by you.
	  lastSensor=sensor;
   }
   public float getPosition(){
      return position;
   }
   public void setFloorIndicator (int floor){
      floorIndicator = floor;
   }
   public int readFloorIndicator() {
      return floorIndicator;
   }
}
*/
 //*/
