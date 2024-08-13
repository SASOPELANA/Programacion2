/*
  Punteros - Declaracion de Punteros

  &n = La direccíon de n
  *n = La variable cuya direccíon esta almacenada en n
*/
#include <iostream>
using namespace std;

int main() {

  int num, *dir_num;
  num = 20;

  cout << "Numero: " << num << endl;
  cout << "Direccion de memoria de num: " << &num << endl;

  cout << "\n-------------------------------------------------------------\n";

  dir_num = &num;
  cout << "Numero: " << *dir_num << endl;
  cout << "Direccion de memoria: " << dir_num << endl;

  cout << "\nPresione enter para continuar...";
  cin.get();
  return 0;
}
