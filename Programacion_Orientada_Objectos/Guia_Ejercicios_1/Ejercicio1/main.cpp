/*
    1 Crea una clase llamada Rectangulo que represente un rectángulo. La clase
      debe tener dos atributos correspondientes a la base y altura. Implementa
      las siguientes metodos:

      ● Getters y Setter de cada atributo.
      ● calcularArea(): Devuelve el área del rectángulo.
      ● calcularPerimetro(): Devuelve el perímetro del rectángulo.
*/

#include <iostream>
#include "Rectangulo.h"
using namespace std;

int main() {

    float b, a;
    cout << "Ingrese la base del rectangulo: ";
    cin >> b;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> a;

    // creamos el objeto o intanciamos la clase
    Rectangulo area1;
    Rectangulo peri1;

    // Establemos el valor con set;
    area1.setRectangulo(b,a);
    peri1.setRectangulo(b,a);

    cout << "\nEl area del rectangulo es: " << area1.getCalcularArea() << endl;
    cout << "El perimetro del rectangulo es: " << peri1.getCalcularPerimetro() << endl;

  return 0;
}
