/*
  Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
  muestre la diagonal principal de la matriz.
*/
#include <iostream>
using namespace std;

int main() {

  int matriz[3][3], filas = 3, columnas = 3;

  cout << "\n    --- Matriz de 3x3 --- " << endl;

  for (int x = 0; x < filas; x++) {
    for (int i = 0; i < columnas; i++) {
      cout << "Ingrese datos a la matriz [" << x << "][" << i << "] : ";
      cin >> matriz[x][i];
    }
  }

  system("pause");
  cout << "\n   --- Diagonal Principal de la Matriz ---\n";
  cout << "Posicion[0][0] ==> " << matriz[0][0] << " Posicion[1][1] ==> "
       << matriz[1][1] << " Posicion [2][2] ==> " << matriz[2][2] << endl;

  return 0;
}
