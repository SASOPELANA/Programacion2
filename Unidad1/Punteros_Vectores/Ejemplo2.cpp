// Ejemplo de uso de punteros.
#include <iostream>
using namespace std;

int main() {

  int entera,
      *apunto; // declaracion de una variable entera y un puntero entero.

  entera = 2; // se asigna 2 a la variable entera

  apunto = &entera; // se asigna la dirección de entera a punto

  cout << *apunto << endl; // se imprime el contenido de la dirección a la que
                           // apunta el puntero
  cout << apunto << endl;  // se imprime lo que contiene apunto
  cout << &entera << endl; // se imprime la dirección de entera

  cout << "\nPresione enter para continuar...";
  cin.get();

  return 0;
}
