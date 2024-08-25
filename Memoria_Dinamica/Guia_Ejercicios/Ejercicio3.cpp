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

  pedirNumeros(vec);

  return 0;
}

// Funciones
void pedirNumeros(int vec[]) {
  int num = 0, con = 0;

  while (con < 10) {
    cout << "Ingrese numeros al array: ";
    cin >> num;
    vec[con] = num;
    con++;
  }
}

// Funcion positivo negativo
int PositivoNegativo(int v[], int &positivo) {

  int negativo = 0;

  return negativo;
}
