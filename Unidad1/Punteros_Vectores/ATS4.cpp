// Correspondencia entre arrays y punteros

#include <iostream>
using namespace std;

int main() {

  int numeros[] = {1, 2, 3, 4, 5};
  int *dir_numeros;
  int x;

  dir_numeros = numeros; // --> pasa la direccion de memoria inicial del vector

  for (x = 0; x < 5; x++) {
    cout << "Elemento del vector [" << x << "]: " << *dir_numeros++ << endl;
  }

  cout << "\nPresione enter para continuar...";
  cin.get();

  for (x = 0; x < 5; x++) {
    cout << "Posicion de memoria " << numeros[x] << " es: " << dir_numeros++
         << endl;
  }

  cout << "\nPresione enter para continuar...";
  cin.get();

  return 0;
}
