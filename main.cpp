// Autor: LozanoSoft

#include <iostream>
#include <math.h>

using namespace std;

int main(){

  // Condicionales
  //
  // if
  // if/else
  // if/elif -> if/else/if
  // switch

  string palabra = "Hola mundo";
  int numero = 45;
  char caracter = 'd';
  float numF = 3.1416;

  // if simple

  if(palabra == "Hola mundo"){
    cout << "IF - La variable 'palabra' es igual a: Hola mundo" << endl;
  }

  // if/else

  if(caracter != 'd'){
    cout << "La variable 'caracter' no es igual a: 'd'" << endl;
  }
  else{
    cout << "ELSE - La variable 'caracter' es igual a: 'd'" << endl;
  }

  // if/else/if - FORMA 1

  if(numero > 45){
    cout << "La variable 'numero' es mayor a: 45" << endl;
  }
  else
  if(numero < 45){
    cout << "ELSE IF - La variable 'numero' es menor a: 45" << endl;
  }
  else{
    cout << "ELSE - La variable 'numero' es igual a: 45" << endl;
  }

  // if/else/if - FORMA 2

  if(numF > 4){
    cout << "La variable 'numF' es mayor a: 4" << endl;
  }
  else{ // No es mayor a 4

    if(numF < 3){
      cout << "ELSE IF - La variable 'numF' es menor a: 3" << endl;
    }
    else{
      cout << "2_ELSE IF - La variable 'numF' es igual o mayor a 3 y menor o igual a 4" << endl;
    }

  }

  // switch

  int numS = 101;

  switch(numS){

    case 57:
      cout << "La variable 'numS' es igual a: 57" << endl;
    break;

    case 65:
      cout << "La variable 'numS' es igual a: 65" << endl;
    break;

    case 79:
      cout << "La variable 'numS' es igual a: 79" << endl;
    break;

    case 100:
      cout << "La variable 'numS' es igual a: 100" << endl;
    break;

    default:
      cout << "La variable 'numS' no es igual a: 57, 65, 79 ni 100" << endl;
    break;

  }

  return 0;

}
