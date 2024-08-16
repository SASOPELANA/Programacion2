/*
  3. Hacer una matriz de tipo entero de 2 * 2, llenarla de numeros y luego
  copiar todo su contenido hacia otra matriz.
*/
#include <iostream>
using namespace std;

int main() {

  int matriz[2][2], filas = 2, columnas = 2;
  int matriz2[2][2];

  for (int x = 0; x < filas; x++) {
    for (int i = 0; i < columnas; i++) {
      cout << "Ingrese numeros a la matriz [" << x << "][" << i << "]: ";
      cin >> matriz[x][i];
    }
  }

  // Copiamos sus elementos a otra matriz2
  for (int x = 0; x < filas; x++) {
    for (int i = 0; i < columnas; i++) {
      matriz2[x][i] = matriz[x][i]; // Solo hacemos la copia con una asignacion
    }
  }

  for (int x = 0; x < filas; x++) {
    for (int i = 0; i < columnas; i++) {
      cout << "\nElementos de la matriz copiada: \n" << matriz2[x][i];
    }
    cout << "\n";
  }

  system("pause");

  return 0;
}
