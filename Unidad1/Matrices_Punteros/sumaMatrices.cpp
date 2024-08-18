// Realice un programa que calcule la suma de dos matrices dinamicas

#include <iostream>
using namespace std;

// Inicializamos las funciones
void pedirDatos(int **&punteroMatriz1, int **&punteroMatriz2, int &nFilas,
                int &nCol);
void sumarMatrices(int **, int **, int, int);
void mostrarMatrizResultado(int **, int, int);

int main() {

  int **punteroMatriz1 = nullptr;
  int **punteroMatriz2 = nullptr;
  int nFilas = 0, nCol = 0;

  // LLamamos a la funciones
  pedirDatos(punteroMatriz1, punteroMatriz2, nFilas, nCol);
  sumarMatrices(punteroMatriz1, punteroMatriz2, nFilas, nCol);
  mostrarMatrizResultado(punteroMatriz1, nFilas, nCol);

  // Liberar memoria de la matriz 1
  for (int x = 0; x < nFilas; x++) {
    delete[] punteroMatriz1[x];
  }
  delete[] punteroMatriz1;

  // Liberar memoria de la matriz 2
  for (int x = 0; x < nFilas; x++) {
    delete[] punteroMatriz2[x];
  }
  delete[] punteroMatriz2;

  return 0;
}

void pedirDatos(int **&punteroMatriz1, int **&punteroMatriz2, int &nFilas,
                int &nCol) {
  cout << "Ingrese el numero de filas: ";
  cin >> nFilas;
  cout << "Ingrese el numero de columnas: ";
  cin >> nCol;

  // Reservando memoria para la primera matriz
  punteroMatriz1 = new int *[nFilas]; // Reservar memoria oara la fila
  for (int x = 0; x < nFilas; x++) {
    punteroMatriz1[x] = new int[nCol]; // Reservar memoria para las columnas
  }

  cout << "\nIngrese los elemntos de la primera matriz: \n";
  for (int x = 0; x < nFilas; x++) {
    for (int i = 0; i < nCol; i++) {
      cout << "Ingrese un numero[" << x << "][" << i << "]: ";
      cin >> *(*(punteroMatriz1 + x) + i); // -> punteroMatriz1[x][i]
    }
  }

  // Reservando memoria para la segunda matriz
  punteroMatriz2 = new int *[nFilas]; // Reservar memoria oara la fila
  for (int x = 0; x < nFilas; x++) {
    punteroMatriz2[x] = new int[nCol]; // Reservar memoria para las columnas
  }

  cout << "\nIngrese los elemntos de la segunda matriz: \n";
  for (int x = 0; x < nFilas; x++) {
    for (int i = 0; i < nCol; i++) {
      cout << "Ingrese un numero[" << x << "][" << i << "]: ";
      cin >> *(*(punteroMatriz2 + x) + i); // -> punteroMatriz1[x][i]
    }
  }
}

void sumarMatrices(int **punteroMatriz1, int **punteroMatriz2, int nFilas,
                   int nCol) {
  for (int x = 0; x < nFilas; x++) {
    for (int i = 0; i < nCol; i++) {
      *(*(punteroMatriz1 + x) + i) += *(*(punteroMatriz2 + x) + i);
    }
  }
}

void mostrarMatrizResultado(int **punteroMatriz1, int nFilas, int nCol) {
  cout << "\nLa suma de las 2 matrices es: \n";
  for (int x = 0; x < nFilas; x++) {
    for (int i = 0; i < nCol; i++) {
      cout << *(*(punteroMatriz1 + x) + i); // punteroMatriz1[x][i];
    }
    cout << "\n";
  }
}
