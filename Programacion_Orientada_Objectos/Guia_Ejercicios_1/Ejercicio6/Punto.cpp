#include "Punto.h"
#include <cmath>

// Inciamos el contructor
Punto::Punto(float xIncial, float yInicial) {
  _x = xIncial;
  _y = yInicial;
}

// Metodos
void Punto::setPuntos(float x, float y) { // set para establcer valores
  _x = x;
  _y = y;
}

float Punto::getX() { return _x; }

float Punto::getY() { return _y; }

// calculamos la distancia entre los puntos
float Punto::calcular(Punto otroPunto) {

  float x2 = otroPunto.getX();
  float y2 = otroPunto.getY();

  // Funcion para calcular la distancia entre dos puntos
  return std::sqrt(std::pow(x2 - _x, 2) + std::pow(y2 - _y, 2));
}

// Movemos el puntos
void Punto::mover(float deltaX, float deltaY) {
  _x += deltaX;
  _y += deltaY;
}
