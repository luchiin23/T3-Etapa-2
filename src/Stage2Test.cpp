#include <string>
#include <fstream>
#include <iostream>  // required by cout
#include "BotoneraPrimerPiso.h"
#include "BotoneraPisoIntermedio.h"
#include "BotoneraUltimoPiso.h"
#include "Cabina.h"
#include "Motor.h"
#include <unistd.h>
#include <string>

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
      Cabina cabina(caja,0.0f,1);
      Motor motor(cabina,0.2);

      float tiempo=0.0;
      motor.lift();
      int pisotemp=0, ref = cabina.readFloor();
      string sense;
      cout << "Tiempo\tPiso\tAltura\tSensores" << endl;


      while((cabina.readFloor()< numpisos)){
    	  motor.muevete(ref);
    	  if (cabina.readFloor() != pisotemp){
    		  pisotemp = cabina.readFloor();
    		  for(unsigned int ii=0;ii<sensores.size();ii++){
    			  sense+=sensores[ii].isActivated()?"1":"0";
    		  }
    		  cout << tiempo; cout << '\t' ;cout << cabina.readFloor();
    		  cout <<'\t'; cout << cabina.getPosition();
    		  cout << '\t' ; cout << sense << endl;
    		  sense ="";
    	  }
    	  tiempo+=0.3;
      }

      motor.lower();
      while(cabina.readFloor()> 1){
    	  motor.muevete(ref);
		  if (cabina.readFloor() != pisotemp){
			  pisotemp = cabina.readFloor();
			  for(unsigned int ii=0;ii<sensores.size();ii++){
				  sense+=sensores[ii].isActivated()?"1":"0";
			  }
			  cout << tiempo; cout << '\t' ;cout << cabina.readFloor();
			  cout <<'\t'; cout << cabina.getPosition();
			  cout << '\t' ; cout << sense << endl;
			  sense ="";
		  }
		  tiempo+=0.3;
      }
      return 0;
}



