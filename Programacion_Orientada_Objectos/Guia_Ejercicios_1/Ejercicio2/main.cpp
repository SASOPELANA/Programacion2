/*
    2 Crea una clase llamada Dado que simule el comportamiento de un dado de
   seis caras. La clase debe contener los siguientes atributos:

    ● valor (int): Almacena el valor actual del dado (un número entre 1 y 6).
      Implementa los siguientes métodos públicos:

    ● Dado(): Constructor que inicializa el dado con un valor aleatorio entre 1
   y 6.

    ● lanzar(): Simula el lanzamiento del dado, asignando un nuevo valor
      aleatorio entre 1 y 6 al atributo valor.

    ● getValor(): Devuelve el valor actual del dado.

    ● esMaximo(): Devuelve true si el valor del dado es 6, y false en caso
      contrario.

    ● esMinimo(): Devuelve true si el valor del dado es 1, y false en caso
      contrario.
*/

#include "Dado.h"
#include <iostream>

using namespace std;

int main() {

  Dado dado1;

  // Establecemos el valor del dado
  dado1.lanzar();

  // Ovtenemos el valor del dado --> get
  cout << "\nValor del dado: " << dado1.getValor() << endl;

  if (dado1.esMaximo()) {
    cout << "\nObtuvo el valor maximo dado -> " << dado1.getValor() << endl;
  } else {
    cout << "\nNo Obtuvo el Valor maximo. Valor -> " << dado1.getValor()
         << endl;
  }

  if (dado1.esMinimo()) {
    cout << "\nObtuvo el valor minimo del dado -> " << dado1.getValor() << endl;
  } else {
    cout << "\nNo obtuvo el valor minimo. Valor -> " << dado1.getValor()
         << endl;
  }

  return 0;
}
