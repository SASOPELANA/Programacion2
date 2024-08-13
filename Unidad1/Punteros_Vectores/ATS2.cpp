/*
  Ejercicio 1: Comprobar si un numero es par o impar, y señalar la posicion de
  memoria donde se esta guardado el mumero. Con punteros.
*/
#include <iostream>
using namespace std;

int main() {

  int num, *dir_num;

  cout << "Ingrese un numero: ";
  cin >> num;

  dir_num = &num;

  if (*dir_num % 2 == 0) {
    cout << "El numero " << *dir_num << " es par.\n";
    cout << "Su direccion de memoria: " << dir_num << endl;
  } else {
    cout << "El numero " << *dir_num << " es impar.\n";
    cout << "Su direccion de memoria: " << dir_num << endl;
  }

  cout << "\n-------------------------------------------------\n";
  cout << dir_num << endl;
  cout << *dir_num
       << endl; // Al poner el * delatero de la variable puntero mostarra lo que
                // esta almacendado en esa posicion de memoria

  cout << "\nPresione enter para continuar...\n";
  cin.get();
  return 0;
}
