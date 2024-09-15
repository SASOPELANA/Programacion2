#pragma once

// Cramos la clase
class Punto {
  // Atributos
private:
  float _x;
  float _y;

  // Metodos
public:
  Punto(float xIncial, float yInicial); //-> Constructor
  void setPuntos(float x, float y);
  float getX();
  float getY();
  float calcular(Punto otroPunto);
  void mover(float deltaX, float deltaY);
};
