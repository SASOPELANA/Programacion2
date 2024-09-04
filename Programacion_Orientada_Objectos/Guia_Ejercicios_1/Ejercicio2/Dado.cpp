#include "Dado.h"
#include <cstdlib>
#include <ctime>

// iniciamos el constructor de la clase Dado, con la semilla
Dado::Dado() {
  srand(time(0)); // Inicimaos la semilla

  _valor = 1 + rand() % 6;
}

// Metodos
void Dado::lanzar() { // Establecemos el valor del dado

  _valor = 1 + rand() % 6;
}

// Metodo get, devolver o obtener el valor
int Dado::getValor() { return _valor; }

// Metedo para devlver bool true o false
bool Dado::esMaximo() {
  if (_valor == 6) {
    return true;
  } else {
    return false;
  }
}

// Metodo para devolder true o false
bool Dado::esMinimo() {
  if (_valor == 1) {
    return true;
  } else {
    return false;
  }
}
