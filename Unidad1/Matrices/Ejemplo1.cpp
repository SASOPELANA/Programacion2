/*
  1. Hacer un programa para rellenar una matriz pidiendo al usuario el numero de
  filas y columnas, posteriormente mostrar la matriz en pantalla.
*/
#include <iostream>
using namespace std;

int main() {

  int numeros[10][10], filas, columnas;

  cout << "Digite el numero de filas: ";
  cin >> filas;
  cout << "Digite el numero de columnas: ";
  cin >> columnas;

  // Almacenamos elementos en la matriz
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "Digite un numero [" << i << "][" << j << "]: ";
      cin >> numeros[i][j];
    }
  }

  // mostrar la matriz
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << numeros[i][j];
    }
    cout << "\n";
  }

  system("pause");

  return 0;
}
