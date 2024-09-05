#pragma once

// Creamos la clase
class Triangulo {
  // Atributos
private:
  float _lados[3];

  // Metodos
public:
  Triangulo();                           // --> Constructor
  float getLado(int numero);             // --> get --> obtenemos el valor
  void setLado(int numero, float valor); // set --> establecemos el valor
  int getTipo();
  bool isEscaleno();
  bool isIsosceles();
  bool isEquilatero();
};
