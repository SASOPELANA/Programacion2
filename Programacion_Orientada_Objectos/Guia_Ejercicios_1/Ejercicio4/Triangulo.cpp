#include "Triangulo.h"

// Inciamos el constructor
Triangulo::Triangulo() {
  _lados[0] = 0.0f;
  _lados[1] = 0.0f;
  _lados[2] = 0.0f;
}

// metodos para obetner el valor de un lado
float Triangulo::getLado(int numero) {
  if (numero >= 1 && numero <= 3) {
    return _lados[numero - 1]; // Ajustar el indice del vector
  }
  return 0; // Devolver cero, si esta fuera de rango
}

// Metodo para establecer el valor del lado correspodiente
void Triangulo::setLado(int numero, float valor) {
  if (numero >= 1 && numero <= 3 && valor >= 1) {
    _lados[numero - 1] = valor;
  }
}

// Metodo para Devolver el tipo de Triangulo
int Triangulo::getTipo() {
  if (_lados[0] == _lados[1] && _lados[1] == _lados[2]) {
    return 1; // Equilatero, todos los lados son iguales
  } else if (_lados[0] == _lados[2] || _lados[1] == _lados[2] ||
             _lados[0] == _lados[1]) {
    return 2; // Isoceles, dos lados son iguales
  }

  return 3; // Escaleno, los tres lados son distintos
}

// Metodo para devolver true, si el triangulo es Escaleno
bool Triangulo::isEscaleno() {
  if (_lados[0] != _lados[1] && _lados[1] != _lados[2] &&
      _lados[0] != _lados[2]) {
    return true;
  }
  return false;
}

// Metodo para devolver true, si el triangulo es Isoceles
bool Triangulo::isIsosceles() {
  if (_lados[0] == _lados[2] || _lados[1] == _lados[2] ||
      _lados[0] == _lados[1]) {
    return true;
  }
  return false;
}

// Metodo para devolver true, si el triangulo es Equilatero
bool Triangulo::isEquilatero() {
  if (_lados[0] == _lados[1] && _lados[1] == _lados[2]) {
    return true;
  }
  return false;
}
