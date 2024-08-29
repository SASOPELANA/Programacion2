/*
  5_ Hacer una función que reciba un vector de enteros y su tamaño y luego
  muestre el vector ordenado de forma ascendente, tener en cuenta que el vector
  enviado como argumento no debe ser modificado.
*/
#include <iostream>
using namespace std;

// Prototipo de funciones
void cargarVector(int *v, int tamanio);
void MostrarVector(int *v, int tamanio);
void OrdenarVector(int *v, int tamanio);

int main() {

  int tam = 0;
  int *pV = nullptr;

  cout << "Ingrese el tamanio del vector: ";
  cin >> tam;

  // creamos el vector
  pV = new int[tam];

  // verificamos si tenemos memoria disponible
  if (pV == nullptr) {
    cout << "Error al asignar memoria.\n";
    return -1;
  }

  cout << "\nIngrese valores al vector dinamico: ";

  cargarVector(pV, tam);
  MostrarVector(pV, tam);
  OrdenarVector(pV, tam);

  // Libreamos memoria
  delete[] pV;

  return 0;
}

// Funciones
void cargarVector(int *v, int tamanio) {

  cout << "\n";
  int num;
  for (int x = 0; x < tamanio; x++) {
    cout << "# " << x + 1 << " : ";
    cin >> num;
    v[x] = num;
  }
}

// funcion mostrar vector
void MostrarVector(int *v, int tamanio) {
  cout << "\nMostramos el vector: \n";
  for (int x = 0; x < tamanio; x++) {
    cout << "[" << v[x] << "] ";
  }
}

// Funcion ordenar vector
void OrdenarVector(int *v, int tamanio) {
  cout << "\n";
  cout << "\nMostramos el vector ordenado de fomra ascendente: \n";

  // Metodo de ordenamiento por burbuja
  int aux = 0;
  for (int x = 0; x < tamanio; x++) {
    for (int i = 0; i < tamanio - 1; i++) {
      if (v[i] > v[i + 1]) {
        aux = v[i + 1];
        v[i + 1] = v[i];
        v[i] = aux;
      }
    }
  }

  // Mostramos el vector ordenado
  for (int j = 0; j < tamanio; j++) {
    cout << "[" << v[j] << "] ";
  }
}
