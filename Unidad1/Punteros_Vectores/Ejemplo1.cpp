#include <iostream>
using namespace std;

int main() {

  // Los Punteros
  // Son variables que almacenan direcciones de memoria.
  // Son usados con frecuencia en lso programas en C para la asignacion de
  // dinámica de memoria.

  int var, *pint;

  cout << var << endl;

  cout << pint << endl;

  cout << "Presione enter para continuar ....\n";
  cin.get();

  // Con el simbolo & cuando lo pasamos antes del nombre de la variable ya
  // declarada, se convierte en opredor de direccion.

  cout << &var << endl;

  cout << &pint << endl;

  cout << "Presione enter para continuar ....\n";
  cin.get();

  cout << "--------------------------------------------------\n";
  var = 15;
  pint = &var;

  cout << var << endl;

  cout << pint;

  cout << "\nPresione enter para continuar ....\n";
  cin.get();

  cout << "--------------------------------------------------\n";
  var = 15;    // Se asigna el vlaor 15 a var
  pint = &var; // Se asigna a pint la direccíon de var

  cout << *pint; // Se muestra lo que en la direccíon que contiene pint

  cout << "\nPresione enter para continuar ....\n";
  cin.get();

  return 0;
}
