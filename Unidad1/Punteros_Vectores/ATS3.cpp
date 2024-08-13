/*
  Ejercicio 2: Determinar si un numero es primo o no, con punteros y ademas
  indicar en que posicion de memoria se guardo el numero.
*/
#include <iostream>
using namespace std;

int main() {

  int num, primo, x, *dir_num;

  cout << "Digite un numero: ";
  cin >> num;

  dir_num = &num;

  for (x = 1; x <= *dir_num; x++) {
    if (*dir_num % x == 0) {
      primo++;
    }
  }

  if (primo == 2) {
    cout << "\nEl numero " << *dir_num << " es primo.\n";
    cout << "Posicion en memoria: " << dir_num << endl;
  } else {
    cout << "\nEl numero " << *dir_num << " no es primo.\n";
    cout << "Posicion en memoria: " << dir_num << endl;
  }

  cout << "\nPresione enter para continuar...\n";
  cin.get();
  return 0;
}
