/*
  Hacer un programa que permita representar un Incrementador. Un incrementador
  es un número entero que comienza con un valor inicial y pueda incrementarse a
  partir de un valor de incremento. También deberá llevar la cuenta de la
  cantidad de veces que incrementó. Por ejemplo, si nuestro incrementador
  comienza en 0 y el valor de incremento es de 50. En cada incremento, aumentará
  de 50 en 50. Ejemplo: 0, 50, 100, 150, etc. Restricciones:
  - El valor del incrementador no puede nunca disminuir.
  - La cantidad de veces que se incrementó siempre debe aumentar de uno en uno.
  Tampoco puede disminuir.
  - Siempre que el incrementador aumente debe hacerlo por la misma cantidad
  definida en el valor de incremento.
*/
#include <iostream>
using namespace std;

int main() {

  const int VALOR_INCREMENTO = 50;
  int incrementador = 0;
  int cant_incrementos = 0;
  bool incremento;

  cout << "Eliga una opcion si desea incrementar (1 SI / 0 NO): ";
  cin >> incremento;

  while (incremento) {

    cout << incrementador << endl;
    incrementador += VALOR_INCREMENTO;
    cant_incrementos++;

    cout << "Eliga una opcion si desea incrementar (1 SI / 0 NO): ";
    cin >> incremento;
  }

  cout << "INCREMENTADOR: " << incrementador << endl;
  cout << "CANTIDAD INCREMENTOS: " << cant_incrementos << endl;

  return 0;
}
