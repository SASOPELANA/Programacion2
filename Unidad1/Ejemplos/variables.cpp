#include <iostream>
using namespace std;

// Prototipos de Funciones
void cargarVector(int *v, int tam);
void sumarComponentesVector(int *v, int tam, int &refe);
void mostrarVector(int *v, int tam);

// Variable Puntero: es una variable que almacena una dirección de memoria

int main() {
  int vec[5] = {},
      *puntV; // * es una variable puntero, alamcena una dirección de memoria

  int tamanio = 5;
  /*
  cout << vec << endl;
  system("pause");
  puntV = vec;  // --> Se esta asignando una direccion de memoria en el puntero
  cout << puntV << endl;
  system("pause")
  */

  cargarVector(vec, tamanio);
  mostrarVector(vec, tamanio);

  cout << "\n";
  int suma;

  // Forma de mostrar una direccion de memoria en c++,   con &
  cout << &suma;
  cout << "\n";

  sumarComponentesVector(vec, tamanio, suma);
  cout << "Suma del componentes del vector " << suma;
  cout << "\n";
  system("pause");

  return 0;
}

void cargarVector(int v[], int tam) {
  // cout<< v << endl;
  // system("pause");
  int i;
  for (i = 0; i < tam; i++) {
    cout << "Ingrese un numero: ";
    cin >> v[i];
  }
  // tam = 10;
}

void mostrarVector(int v[], int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    cout << v[i] << "\t";
  }
}

void sumarComponentesVector(int *v, int tam, int &refe) {
  int i;
  cout << &refe << endl;
  refe = 0;
  for (i = 0; i < tam; i++) {
    refe += v[i];
  }
}
