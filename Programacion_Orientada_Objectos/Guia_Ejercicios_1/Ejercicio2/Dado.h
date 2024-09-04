#pragma once

// Creamos una clase llamada dado
class Dado {
  // Atributos
private:
  int _valor;

  // Metodos y constructor
public:
  Dado();         // -> constructor
  void lanzar();  // Metodos
  int getValor(); // get para obtener el valor de lso atributos de la clase
  bool esMaximo();
  bool esMinimo();
};
