/*
 * Motor.cpp
 *
 *  Created on: 19-06-2017
 *      Author: Luchiin
 */

#include "Motor.h"
using namespace std;

Motor::Motor() {
	cabina =NULL;
	deltaHight =1.0;
	UP=0;
	DOWN = 1;
	PAUSED = 2;
	STOPPED=3;
	state = STOPPED;
}

Motor::Motor(Cabina &c, float speed) {
	cabina = &c;
	deltaHight =speed;
	UP=0;
	DOWN = 1;
	PAUSED = 2;
	STOPPED=3;
	state = STOPPED;
}

Motor::~Motor() {
	// TODO Auto-generated destructor stub
}

void Motor::lift() {
      state = UP;
   }
void Motor::lower() {
      state = DOWN;
   }
void Motor::stop() {
      state = STOPPED;
   }
void Motor::pause() {
      //int oldState =state;
      state = PAUSED;
      //state = oldState;
   }
int Motor::getState(){
      return state;
}
void Motor::muevete(int &rr){
      switch (state) {
         case 0: cabina->move(rr,deltaHight);
                  break;
         case 1: cabina->move(rr,-deltaHight);
                  break;
         default:
        	 cout << "En pausa o detenido" <<endl;
      }
   }

