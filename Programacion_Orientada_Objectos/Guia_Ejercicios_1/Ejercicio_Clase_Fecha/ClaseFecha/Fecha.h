#pragma once
#include <string> // para usar std::   es buena practica

// Clase
class Fecha {
  // Atributos
private:
  int _dia;
  int _mes;
  int _anio;

  // metodos privados
  void validarFecha(); //--> Funcion interna para validar fecha
  bool diaValido();
  bool mesValido();
  bool anioValido();
  void setFechaInicial();

  // Metodos
public:
  Fecha(int dia, int mes, int anio);
  Fecha();
  int getDia();
  int getMes();
  int getAnio();
  std::string toString();
  void AgregarDias(int dias);
};
