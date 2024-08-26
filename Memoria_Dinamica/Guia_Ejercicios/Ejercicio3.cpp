/*
  3_  Hacer un programa que solicite al usuario 10 números y luego muestre
  primero los números positivos y luego los negativos. El programa debe crear
  dos arrays dinámicos con la cantidad exacta en cada caso: uno para almacenar
  los números positivos y otro para los números negativos.
*/
#include <iostream>
using namespace std;

// Prototiopo de funciones
void pedirNumeros(int vec[]);
int PositivoNegativo(int v[], int &positivo);

int main() {
  int vec[10];
  int positivo = 0, negativo = 0;
  int *pPosi = nullptr;
  int *pNega = nullptr;

  pedirNumeros(vec);

  negativo = PositivoNegativo(vec, positivo);

  // verificamos si se ingreso numeros positivos.
  if (positivo > 0) {
    // Creamos los vectores dinamicos
    pPosi = new int[positivo];

    // Validar si tenemos memoria disponible
    if (pPosi == nullptr) {
      cout << "Error al asignar memoria.\n";
      exit(-1); // salir del programa
    }

    // Contador para almacenar los valores correctamente y guardamos los numeros
    // positivos en el vector dinamico.
    int con = 0;
    for (int x = 0; x < 10; x++) {
      if (vec[x] > 0) {
        pPosi[con] = vec[x];
        con++;
      }
    }

    cout << "\nVector dinamico de numeros positivos --> [" << positivo << "]."
         << endl;
    cout << "\n";
    for (int i = 0; i < positivo; i++) {
      cout << "[" << pPosi[i] << "] ";
    }
  } else {
    cout << "\nNo se ingresaron numeros postivos al Array.\n";
  }

  // verificamos si se ingreso numeros negativos al vector.
  if (negativo > 0) {

    // Creamos el vector dinamico de numeros negativos
    pNega = new int[negativo];

    // Validar si tenemos memoria disponible
    if (pNega == nullptr) {
      cout << "Error al asignar memoria.\n";
      return -1; // Salir del programa
    }

    // Guardamos los numeros negativos en el vector dinamico
    int con = 0; // reiniciamos el contador
    for (int x = 0; x < 10; x++) {
      if (vec[x] < 0) {
        pNega[con] = vec[x];
        con++;
      }
    }

    cout << "\n";
    cout << "\nVector dinamico de numeros negativos --> [" << negativo << "]."
         << endl;
    cout << "\n";
    for (int i = 0; i < negativo; i++) {
      cout << "[" << pNega[i] << "] ";
    }
  } else {
    cout << "\n\nNo se ingresaron numeros negativos al Array.";
  }

  cout << "\n";
  cout << "\nFin del programa.\n";

  // Liberamos memoria.
  delete[] pPosi;
  delete[] pNega;

  return 0;
}

// Funciones
void pedirNumeros(int vec[]) {
  int num = 0, con = 0;

  while (con < 10) {
    cout << "# " << con + 1 << ". Ingrese numeros al Array: ";
    cin >> num;
    vec[con] = num;
    con++;
  }
}

// Funcion positivo negativo
int PositivoNegativo(int v[], int &positivo) {

  int negativo = 0;

  for (int x = 0; x < 10; x++) {
    if (v[x] > 0) {
      positivo++;
    } else if (v[x] < 0) {
      negativo++;
    }
  }

  return negativo;
}
