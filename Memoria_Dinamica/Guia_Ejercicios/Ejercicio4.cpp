/*
  4_ Hacer una función que reciba un vector de enteros y su tamaño y devuelva la
      cantidad de números distintos que se repiten en el vector.
*/
#include <iostream>
using namespace std;

// Prototipo de Funciones
int VectorEnteros(int *v, int tamanio);

int main() {

  int tamanio = 0, conDistintos = 0;
  int *pVector = nullptr;

  cout << "Ingrese el tamanio del vector: ";
  cin >> tamanio;

  while (tamanio <= 0) {
    cout << "\nEl tamanio del vector debe ser mayor a cero (0).\n";

    cout << "Ingrese el tamanio del vector: ";
    cin >> tamanio;
  }

  // creamos el vector
  pVector = new int[tamanio];

  // Verficamos si tenemos memoria
  if (pVector == nullptr) {
    cout << "Error al asignar memoria.\n";
    return -1;
  }

  // Cargamos el vector
  cout << "\nIngrese valores al vector -> " << tamanio << "\n\n";
  for (int x = 0; x < tamanio; x++) {
    cout << "# " << x + 1 << ": ";
    cin >> pVector[x];
  }

  conDistintos = VectorEnteros(pVector, tamanio);

  if (conDistintos > 0) {
    cout << "\nLa cantidad de numeros repetidos en el vector es: "
         << conDistintos << endl;
  } else {
    cout << "\nNo se encontraron numeros repetidos en el vector. " << endl;
  }

  // Liberamos memoria
  delete[] pVector;

  return 0;
}

// Funciones
int VectorEnteros(int *v, int tamanio) {

  int distintos = 0;

  // Verficamos si tenemos numeros repetidos.
  for (int i = 0; i < tamanio; i++) {
    // Descartamos el cero
    if (v[i] == 0) {
      continue;
    }

    bool repetidos = false;
    for (int x = i + 1; x < tamanio; x++) {
      if (v[i] == v[x]) {
        v[x] = 0;
        repetidos = true;
      }
    }

    if (repetidos) {
      distintos++;
    }
  }

  return distintos;
}
