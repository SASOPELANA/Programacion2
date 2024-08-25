/*
  1 Escribe un programa que solicite al usuario el tamaño de un array de
  enteros, lo cree dinámicamente utilizando new, el usuario debe poder cargar el
  array y mostrarlo, y luego libere la memoria con delete
*/
#include <iostream>
using namespace std;

int main() {
  int tamanio;
  int *pTamanio = nullptr;

  cout << "Ingrese el tamanio del Arreglo Dinamico (Enteros): ";
  cin >> tamanio;

  // verificar el tamanio
  if (tamanio <= 0) {
    cout << "El tamanio del arreglo debe ser mayor a cero (0)." << endl;
    return -1;
  }

  // Creamos el Arreglo dinamico o vector
  pTamanio = new int[tamanio]; // creamos el arreglo con new

  // Validar si tenemos memoria disponible para arrgelo dinamico
  if (pTamanio == nullptr) {
    cout << "Error al asignar memoria.\n";
    return -1;
  }

  cout << "\n";

  // For para pedir lso datos del arrgelo dinamico
  for (int x = 0; x < tamanio; x++) {
    cout << "Ingrese datos al Arreglo Dinamico: ";
    cin >> pTamanio[x];
  }

  // Mostramos el arrgelo
  cout << "\nArreglo Dinamico: \n";
  for (int i = 0; i < tamanio; i++) {
    cout << pTamanio[i] << endl;
  }

  // Liberamos la memoria utilizada. si o  si al usar arreglos dinamicos.
  delete[] pTamanio;

  return 0;
}
