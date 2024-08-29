/*
    6 Escribe un programa que solicite al usuario ingresar una lista de 10
   números enteros. Luego, el programa debe mostrar los números pares distintos
   que se ingresaron. Para resolver este ejercicio, deberás implementar una
   función que reciba un vector de enteros y su tamaño, y que devuelva un
   puntero a un vector dinámico que contenga solo los números pares distintos
   del vector recibido.
*/
#include <iostream>
using namespace std;

// Prototipo de funciones
void CargarVector(int vec[], int &tam);
int *DevolverPares(int vec[], int &tam);

int main() {

  int tam = 10;
  int vec[tam];
  int *pPares = nullptr;

  CargarVector(vec, tam);

  pPares = DevolverPares(vec, tam);

  // Mostramos los numeros pares.
  cout << "\n";
  if (tam > 0) {
    cout << "\nLos numeros pares distintos son: " << endl;
    for (int x = 0; x < tam; x++) {
      cout << pPares[x] << " ";
    }

  } else {
    cout << "\nNo se encontraron numeros pares.\n";
  }

  cout << "\n";

  // Liberamos de memoria
  delete[] pPares;

  return 0;
}

// función cargar vector
void CargarVector(int vec[], int &tam) {

  int num;
  cout << "\nIngrese una lista de 10 numeros: \n";
  for (int x = 0; x < tam; x++) {
    cout << "#" << x + 1 << ": ";
    cin >> num;
    vec[x] = num;
  }
}

// Funcion devolver pares
int *DevolverPares(int vec[], int &tam) {

  int pares = 0;
  int *pPares = nullptr;

  // Contar pares distintos
  for (int x = 0; x < tam; x++) {
    if (vec[x] % 2 == 0 && vec[x] != 0) { // -> descartamos los ceros tambien
      bool repetido = false;
      for (int j = 0; j < pares; j++) {
        if (vec[x] == vec[j]) {
          repetido = true;
        }
      }
      if (!repetido) {
        vec[pares] = vec[x];
        pares++;
      }
    }
  }

  if (pares == 0) {
    tam = 0;
  }

  pPares = new int[pares];

  if (pPares == nullptr) {
    cout << "Error al asignar memoria.\n";
    exit(-1);
  }

  for (int i = 0; i < pares; i++) {
    pPares[i] = vec[i];
  }

  // Actualizamos el contador de pares
  tam = pares;

  return pPares;
}
