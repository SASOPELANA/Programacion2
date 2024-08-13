#include <iostream>
using namespace std;

int main() {

  int a, v[10], *p;
  a = 0;
  a = a + 1;

  cout << a << endl; // se imprimira un 1
  v[0] = 1;
  v[1] = 2;
  p = v;

  cout << *p << endl; // como p guarda la direccion de v, se imprimira el
                      // contenido de v[0], o sea 1

  p = p + 1; // o p++, se incrementa en 1 (decimal) la decimal

  cout << *p; // como el puntero se incrementó en 1, ahora contiene la dirección
              // de v[1]. Se //imprimirá 2.

  cout << "\nPresione enter para continuar...";
  cin.get();

  return 0;
}
