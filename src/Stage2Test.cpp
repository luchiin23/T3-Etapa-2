#include <string>
#include <fstream>
#include <iostream>  // required by cout
#include "BotoneraPrimerPiso.h"
#include "BotoneraPisoIntermedio.h"
#include "BotoneraUltimoPiso.h"
#include "Cabina.h"
#include "Motor.h"
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]){
      int numpisos=4;
      float floorHeight=3.0f;

      BotoneraPrimerPiso bp1;
      BotoneraPisoIntermedio bp2;
      BotoneraPisoIntermedio bp3;
      BotoneraUltimoPiso bp4;

      vector <Sensor> sensores;

      for (int i=0;i<numpisos;i++){
    	  sensores.push_back(Sensor(i*floorHeight,i+1));
      }
      CajaAscensor caja(sensores);
      Cabina cabina(caja,0.0,1);
      Motor motor(cabina,0.02f);
      /*vector<Sensor>::iterator it;
      for (it=sensores.begin();it!=sensores.end();++it){
    	  cout << it->getPosition()<<endl;
      }
      return 0;
}*/

      int tiempo=0;
      Sensor ref(0,0);
      motor.lift();
      while((cabina.readFloor()< numpisos) && (cabina.getPosition()<100)){
    	  motor.muevete(ref);
    	  cout << "read floor: ";cout << cabina.readFloor() << endl;
    	  cout << "cab pose: ";cout << cabina.getPosition() << endl;
    	  tiempo+=2;
    	  usleep(10);
      }
      motor.lower();
      /*while(cabina.readFloor()> 1){
    	  motor.muevete();
      }*/

      return 0;

}
/* Elevator parameters
int numPisos = 8;
float floorHight = 3.0f; // meters

// create elevator
ArrayList<Sensor> sensores = new ArrayList<Sensor> ();
CajaAscensor caja = new CajaAscensor(sensores);
Cabina cabina = new Cabina(bc, caja);
for (int i=0; i < numPisos; i++) {
   sensores.add(new Sensor(i*floorHight,i+1, controlUnit));
}

// commands needed to lift and descend the evelator between
// the first and last floor.

float deltaHight = 0.02f;  // 2 [cm] each time
while(cabina.readFloorIndicator()< numPisos)
    cabina.move(deltaHight);
while(cabina.readFloorIndicator()> 1)
   cabina.move(-deltaHight);
while(cabina.readFloorIndicator()< numPisos)
   cabina.move(deltaHight);
while(cabina.readFloorIndicator()> 1)
   cabina.move(-deltaHight);

*/


