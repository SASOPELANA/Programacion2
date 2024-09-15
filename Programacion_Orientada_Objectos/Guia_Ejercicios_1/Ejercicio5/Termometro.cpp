#include "Termometro.h"

// Inciamos el constructor
Termometro::Termometro(float temperatura, char unidad) {
  _temperatura = temperatura;
  _unidad = unidad;
}

// Metodos
void Termometro::setTemperatura(float nuevaTemperatura) {
  _temperatura = nuevaTemperatura;
}

float Termometro::getTemperatura() { return _temperatura; }

void Termometro::cambiarUnidad(char nuevaUnidad) {
  if (nuevaUnidad == _unidad) {
    return;
  }

  if (nuevaUnidad == 'F' || nuevaUnidad == 'f') {
    _temperatura = (_temperatura * 9 / 5) + 32; // celsius a fahrenheit
  } else if (nuevaUnidad == 'C' || nuevaUnidad == 'c') {
    _temperatura = (_temperatura - 32) * 5 / 9; // fahrenheit a celsius
  }

  _unidad = nuevaUnidad;
}

char Termometro::getUnidad() { return _unidad; }
