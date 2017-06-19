#include <string>
#include <fstream>
#include <iostream>  // required by cout
#include "BotoneraPrimerPiso.h"
#include "BotoneraPisoIntermedio.h"
#include "BotoneraUltimoPiso.h"
using namespace std;

int main(int argc, char* argv[]){
        // Creación botoneras

      BotoneraPrimerPiso bp1;
      BotoneraPisoIntermedio bp2;
      BotoneraPisoIntermedio bp3;
      BotoneraUltimoPiso bp4;

        // Lectura archivo
      ifstream file(argv[1]);

      int time=-1, piso;
      char accion;
      while(!file.eof()){
         if (time>0)   {  // reset previous request
            bp1.resetUpRequest();
            bp2.resetUpRequest(); bp2.resetDownRequest();
            bp3.resetUpRequest(); bp3.resetDownRequest();
            bp4.resetDownRequest();
          }
          file >> time >> piso >> accion; // read first event
                  // excecute new event
          switch (piso){
               case 1: bp1.setRequest(accion);
                       break;
               case 2: bp2.setRequest(accion);
                       break;
               case 3: bp3.setRequest(accion);
                       break;
               case 4: bp4.setRequest(accion);
                       break;
          }

             // show buttons's state
          if( file.eof() ) break;//don't repeat last line
          cout << time << ", " << bp1.isUpOn() << bp2.isUpOn() << bp3.isUpOn() << "-, -" << bp2.isDownOn() << bp3.isDownOn() << bp4.isDownOn() << endl;
       }

      return 0;

}
