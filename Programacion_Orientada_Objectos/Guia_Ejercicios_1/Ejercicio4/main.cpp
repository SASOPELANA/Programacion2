/*
    4_ Crea una clase llamada Triangulo que represente un triángulo. La clase
   debe contener un vector de 3 elementos, donde cada elemento corresponde a la
       longitud de un lado del triángulo. Implementa los siguientes métodos:

    ● getLado(int numero): Devuelve la longitud del valor del lado
   correspondiente al número proporcionado (1, 2, o 3). Si el número es
   incorrecto (fuera del rango 1-3), devuelve cero.

    ● setLado(int numero, float valor): Establece el valor del lado
   correspondiente al número proporcionado (1, 2, o 3). Si el número es
   incorrecto (fuera del rango 1-3), no realiza ninguna acción.

    ● getTipo(): Devuelve el tipo de triángulo según sus lados:
      ○ 1 para un triángulo equilátero (todos los lados iguales).
      ○ 2 para un triángulo isósceles (dos lados iguales).
      ○ 3 para un triángulo escaleno (todos los lados diferentes).

    ● isEscaleno(): Devuelve true si el triángulo es escaleno, false en caso
   contrario.

    ● isIsosceles(): Devuelve true si el triángulo es isósceles, false en caso
   contrario.

    ● isEquilatero(): Devuelve true si el triángulo es equilátero, false en caso
   contrario.
*/
#include "Triangulo.h"
#include <iostream>

using namespace std;

// Prototipo de funcion
void MostrarTriangulo(int num);

int main() {
  float valor = 0;

  // Creamos el objeto o instanciamos la clase
  Triangulo t;

  cout << "\nTipo de Triangulo.\n\n";
  for (int x = 0; x < 3; x++) {
    cout << "Ingrese el valor de los lados " << x + 1 << ": ";
    cin >> valor;
    t.setLado(x + 1, valor); // --> establecemos el valor
  }

  cout << "\nEl tipo de tirangulo es: " << t.getTipo() << endl;

  MostrarTriangulo(t.getTipo());

  // Usamos los metodos booleanos
  cout << "\nUso de metodos booleanos.\n";

  if (t.isEquilatero()) {
    cout << "\nEquilatero.\n";
  } else if (t.isIsosceles()) {
    cout << "\nIsosceles.\n";
  } else if (t.isEscaleno()) {
    cout << "\nEscaleno.\n";
  }

  return 0;
}

void MostrarTriangulo(int num) {
  switch (num) {
  case 1:
    cout << "\nEl Triangulo es Equilatero." << endl;
    break;
  case 2:
    cout << "\nEl Triangulo es Isosceles." << endl;
    break;
  case 3:
    cout << "\nEl Triangulo es Escaleno." << endl;
    break;
  default:
    cout << "\nTriangulo no reconocido." << endl;
    break;
  }
}
