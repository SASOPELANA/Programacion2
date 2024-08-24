#include <iostream>
using namespace std;

// Matriz en una funcion
void mostrarMatriz(int m[][5]); // solo se pasa el segundo valor

int main() {

  // una matriz en un vector de vectores
  int mat[5][5]{{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {5, 9, 1, 5, 7}, {}, {}};

  int vec[5]{1, 2, 3, 4, 5};

  // Matriz de contadores
  int contadores[2][5]{}; // Inicia la matriz todo en cero --> {}

  // mostrar vector
  cout << "Mostrar vector." << endl;
  for (int x = 0; x < 5; x++) {
    cout << "Vector => " << vec[x] << endl;
  }

  cout << "\n";

  // mostramos la matriz con una funcion
  mostrarMatriz(mat);

  return 0;
}

void mostrarMatriz(int m[][5]) {

  cout << "Mostrar Matriz.\n";

  for (int f = 0; f < 5; f++) {
    for (int c = 0; c < 5; c++) {
      cout << m[f][c] << " ";
    }
    cout << "\n";
  }
}
