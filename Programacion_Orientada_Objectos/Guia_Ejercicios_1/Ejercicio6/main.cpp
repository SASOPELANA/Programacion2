/*
    6 Crea una clase llamada Punto que represente un punto en un plano
   cartesiano. La clase debe contener los siguientes atributos:

      ● x (float): Almacena la coordenada en el eje X.

      ● y (float): Almacena la coordenada en el eje Y. Implementa los siguientes
   métodos públicos:

      ● Punto(float xInicial, float yInicial): Constructor que inicializa las
   coordenadas x y y del punto.

      ● Getters y Setters para cada atributo.

      ● calcularDistancia(Punto otroPunto): Devuelve la distancia entre el punto
   actual y otro punto dado. La fórmula para calcular la distancia entre dos
   puntos (x1, y1) y (x2, y2) es: sqrt((x2 - x1)^2 + (y2 - y1)^2).

      ● mover(float deltaX, float deltaY): Mueve el punto sumando deltaX a x y
   deltaY a y
*/

#include "Punto.h"
#include <iostream>

void PedirPuntos(float &x1, float &y1, float &x2, float &y2);
bool MoverPuntos(Punto &punto1, Punto &punto2);

using namespace std;

int main() {

  float x1, y1, x2, y2, distancia;
  bool movido;

  PedirPuntos(x1, y1, x2, y2);

  Punto punto1(x1, y1);
  Punto punto2(x2, y2);

  distancia = punto1.calcular(punto2);

  cout << "La distancia entre los Puntos es: " << distancia << endl;

  cout << "\n";

  movido = MoverPuntos(punto1, punto2);

  if (movido) {

    // DISTANCIA NUEVOS PUNTOS
    distancia = punto1.calcular(punto2);
    cout << "La nueva distancia entre los puntos es: " << distancia << endl;

  } else {
    cout << "No se movio ningun Punto.\n";
  }

  return 0;
}

void PedirPuntos(float &x1, float &y1, float &x2, float &y2) {

  cout << "Ingrese la coordenada x1: ";
  cin >> x1;
  cout << "Ingrese la coordenada y1: ";
  cin >> y1;
  cout << "\n";
  cout << "Ingrese la coordenada x2: ";
  cin >> x2;
  cout << "Ingrese la coordenada y2: ";
  cin >> y2;
}

bool MoverPuntos(Punto &punto1, Punto &punto2) {
  int opcion = 0;
  float deltaX, deltaY;

  cout << "Que punto desea mover? (1 para punto 1, 2 para punto 2): ";
  cin >> opcion;

  if (opcion == 1) {
    cout << "Ingrese el valor de desplazamiento en X para mover el punto 1: ";
    cin >> deltaX;
    cout << "Ingrese el valor de desplazamiento en Y para mover el punto 1: ";
    cin >> deltaY;
    punto1.mover(deltaX, deltaY);
    return true;
  } else if (opcion == 2) {
    cout << "Ingrese el valor de desplazamiento en X para mover el punto 2: ";
    cin >> deltaX;
    cout << "Ingrese el valor de desplazamiento en Y para mover el punto 2: ";
    cin >> deltaY;
    punto2.mover(deltaX, deltaY);
    return true;
  } else {
    return false;
  }
}
