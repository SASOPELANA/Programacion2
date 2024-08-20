/*
  2 Hacer una función llamada quitarRepetidos que reciba dos vectores de enteros
  de 10 elementos llamados vectorSinProcesar y vectorSinRepetidos. La función
  debe procesar el vectorSinProcesar de manera que en el vectorSinRepetidos
  queden todos los elementos distintos del vectorSinProcesar. La función debe
  devolver la cantidad de elementos asignados a vectorSinRepetidos.

  Ejemplo:
  vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 }
  vectorDos[10];
  int elementos = quitarRepetidos(vectorUno, vectorDos);

  En elementos debe quedar el valor 5 ya que son 5 los elementos sin repetirse
  del vector. Además el vectorDos debe contener los valores 1, 2, 5, 4 y 3.
*/
#include <iostream>
using namespace std;

// Definimos las funciones.
int quitarRepetidos(int vectorSinProcesar[], int vectorSinRepetidos[]);

int main() {

  int vectorUno[10] = {1, 2, 1, 2, 5, 5, 4, 4, 3, 3};
  int vectorDos[10];
  int elementos = 0;

  // llamados a la funcion
  elementos = quitarRepetidos(vectorUno, vectorDos);

  cout << "Elementos repetidos: " << elementos << endl;

  // Mostrae elementos del vector sin repetidos
  for (int x = 0; x < elementos; x++) {
    if (x == 0) {
      cout << "\nVector Dos: " << vectorDos[x];
    } else {
      cout << ", " << vectorDos[x];
    }
  }

  cout << "\n";

  return 0;
}

int quitarRepetidos(int vectorSinProcesar[], int vectorSinRepetidos[]) {
  int elementos = 0;

  for (int x = 0; x < 10; x++) {
    // Descarta el cero
    if (vectorSinProcesar[x] == 0) {
      continue; // Termina la iteracion y continua con el siguiente
    }

    bool repetidos = false;
    for (int i = x + 1; i < 10; i++) {
      if (vectorSinProcesar[x] == vectorSinProcesar[i]) {
        vectorSinProcesar[i] =
            0; // Marcamos los elementos repetidos con un cero
        repetidos = true;
      }
    }

    // Contamos la cantidad de elementos repetidos y asignamos los valores
    // al vector sin repetirse
    if (repetidos) {
      vectorSinRepetidos[elementos] = vectorSinProcesar[x];
      elementos++;
    }
  }

  // Devolmeos la cantidad de elementos repetidos con un contador.
  return elementos;
}
