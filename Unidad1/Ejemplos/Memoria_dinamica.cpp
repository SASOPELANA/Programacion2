#include <iostream>
using namespace std;

int main() {

  /*
    No se sabe en codificacion la cantidad de elementos que necesitamos
    pero si se puede en tiempo de ejecucion

    Necesitamos mas memoria de la que tiene asignado
   */

  /*
    NULL    => 0x000 => 0 => C
    nullptr => 0x000 => 0 => C++  11
  */

  // int vec[1000000];
  int *pVec;

  pVec = new int[1000000];

  // Evalua si pudo asignar memeoria   ==> pVec = new int[1000000];
  if (pVec == nullptr) {
    cout << "No se pudo asignar memoria... chao" << endl;
    exit(-1); // sale del programa y hace que devuelva el valor que le enviamos
    // return -1;
  }

  cout << "Esto funciona correctamente." << endl;

  // liberar memeoria dinamica
  delete[] pVec;

  return 0;
}
