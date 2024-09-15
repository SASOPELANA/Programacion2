/*
    5 Crea una clase llamada Termometro que represente un termómetro digital. La
      clase debe contener los siguientes atributos:

    ● temperatura (ﬂoat): Almacena la temperatura actual medida por el
   termómetro.

    ● unidad (char): Almacena la unidad de medida de la temperatura ('C' para
   Celsius, 'F' para Fahrenheit).

      Implementa los siguientes métodos:

    ● Termometro(float tempInicial, char unidadInicial):
      Constructor que inicializa la temperatura y la unidad de medida.

    ● get y set de temperatura.

    ● cambiarUnidad(char nuevaUnidad): Cambia la unidad de medida
      entre Celsius y Fahrenheit. Si la nueva unidad es diferente de la actual,
      convierte la temperatura a la nueva unidad.

      ○ Fórmula de conversión de Celsius a Fahrenheit: (C * 9/5) + 32

      ○ Fórmula de conversión de Fahrenheit a Celsius: (F - 32) * 5/9

    ● getUnidad(): Devuelve la unidad actual de medida.
*/

#include "Termometro.h"
#include <iostream>

using namespace std;

int main() {

  Termometro t(200, 'C');

  cout << "temperatura incial: " << t.getTemperatura() << " " << t.getUnidad()
       << endl;

  t.cambiarUnidad('F');

  cout << "Temperatura convertida a Fahrenheit: " << t.getTemperatura() << " "
       << t.getUnidad() << endl;

  t.cambiarUnidad('C');

  cout << "Temperatura convertida nuevamente a Celsius: " << t.getTemperatura()
       << " " << t.getUnidad() << endl;

  return 0;
}
