/*
  Matriz DInamica

  Ejemplo: Rellenar una matriz de NxM Y mostrar su contenido

  **puntero_matriz  --> *puntero_fila -> (int) (int) (int)
                        *puntero_fila -> (int (int) (int)
                        *puntero_fila -> (int) (int) (int)
*/

#include <iostream>
using namespace std;

// Prototipo de funcion pedirDatos
void pedirDatos(
    int **&puntero_matriz, int &nFilas,
    int &nCol); // parametro por referencia para evitar variables globales
void mostrarMatriz(int **, int, int);

int main() {

  // Cuando se vea una variable con dos punteros, señala a una matriz.
  // int **puntero_matriz; // doble puntero --> señala a una matriz

  int **puntero_matriz = nullptr; // es una buena practica inicilaizar los
                                  // punteros con NULL O nullptr
  int nFilas = 0, nCol = 0;

  // LLamaos a las funciones.
  pedirDatos(puntero_matriz, nFilas, nCol);
  mostrarMatriz(puntero_matriz, nFilas, nCol);

  // Liberar la memoria que hemos utilizado en la matriz
  for (int x = 0; x < nFilas; x++) {
    delete[] puntero_matriz[x];
  }

  delete[] puntero_matriz;

  return 0;
}

// Funciones
void pedirDatos(int **&puntero_matriz, int &nFilas, int &nCol) {
  // int **puntero_matriz; // ==> Señala a una matriz.
  // int nFilas, nCol;
  cout << "Digite el numero de Filas: ";
  cin >> nFilas;
  cout << "Digite el numero de Columnas: ";
  cin >> nCol;

  // Reservar memoria para la matriz dinamica
  puntero_matriz = new int *[nFilas]; // Reservando memoria para las filas
  for (int x = 0; x < nFilas; x++) {
    puntero_matriz[x] = new int[nCol]; // Reservando memoria para las Columnas
  }

  cout << "\nDigitando elementos de la matriz: \n";
  for (int x = 0; x < nFilas; x++) {
    for (int i = 0; i < nCol; i++) {
      cout << "Digite un numero[" << x << "][" << i << "]: ";
      cin >> *(*(puntero_matriz + x) + i); // puntero_matriz[x][i]
    }
  }
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol) {

  cout << "\n\nImprimiendo matriz: \n";
  for (int x = 0; x < nFilas; x++) {
    for (int i = 0; i < nCol; i++) {
      cout << *(*(puntero_matriz + x) + i) << " "; // puntero_matriz[x][i];
    }
    cout << "\n";
  }
}
