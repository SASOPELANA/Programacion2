/*
    Metodo de ordenamiento callback
*/
#include <ctime>
#include <iostream>

using namespace std;

// Protitpo de funcion
void CargarVector(int v[], int n);
void MostrarVector(int v[], int n);
void OrdenarVector(int v[], int n, bool criterio(int, int)); // --> callback
bool creciente(int n, int m);
bool decreciente(int n, int m);

int main() {

  int vNumeros[10];

  srand(time(0));

  cout << "\n-- Ordenamiento de numeros con metodo callback. --\n";

  cout << "\n------------------------------------------------\n";
  CargarVector(vNumeros, 10);
  MostrarVector(vNumeros, 10);
  cout << "\n------------------------------------------------\n";

  OrdenarVector(vNumeros, 10, creciente);
  MostrarVector(vNumeros, 10);
  cout << "\n------------------------------------------------\n";

  return 0;
}

// Funciones
void CargarVector(int v[], int n) {
  for (int x = 0; x < n; x++) {
    // Funcion rand para numeros al azar entre el 1 al 100
    v[x] = rand() % 100;
  }
}

// Funcion mostrar vector
void MostrarVector(int v[], int n) {
  for (int x = 0; x < n; x++) {
    cout << "[" << v[x] << "] ";
  }
}

// Funcion Booleana
bool creciente(int n, int m) { return n < m; }
bool decreciente(int n, int m) { return n > m; }

// Ordenamos el vector con burbuja, con criterio y con callback
void OrdenarVector(int v[], int n, bool criterio(int, int)) { // callback
  // Metodo burbuja
  int aux = 0;
  for (int x = 0; x < n; x++) {
    for (int j = x + 1; j < n; j++) {
      if (criterio(v[j], v[x])) {
        aux = v[j];
        v[j] = v[x];
        v[x] = aux;
      }
    }
  }
}
