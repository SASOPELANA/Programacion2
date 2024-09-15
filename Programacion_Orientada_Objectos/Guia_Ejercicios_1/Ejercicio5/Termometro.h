#pragma once

// Creamos la clase
class Termometro {
  // Atributos
private:
  float _temperatura;
  char _unidad;

  // Metodos
public:
  Termometro(float temperatura, char unidad); // --> constructor
  void setTemperatura(float nuevaTemperatura);
  float getTemperatura();
  void cambiarUnidad(char nuevaUnidad);
  char getUnidad(); // --> devolvemos el unidad de medida
};
