#include "Fecha.h"
using namespace std;

// El constructor sin parametros puede asignar los valores directamente.
// El constructor con parametros debe llamar a los set para asignar.

// Inicimos los contructores
Fecha::Fecha(int dia, int mes, int anio) {
  _dia = dia;
  _mes = mes;
  _anio = anio;

  validarFecha();
}

Fecha::Fecha() { setFechaInicial(); }

// metodos
int Fecha::getDia() { return _dia; }

int Fecha::getMes() { return _mes; }

int Fecha::getAnio() { return _anio; }

bool Fecha::diaValido() {
  int diasMeses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return _dia >= 1 && _dia <= diasMeses[_mes - 1];
}

bool Fecha::mesValido() { return _mes >= 1 && _mes <= 12; }

bool Fecha::anioValido() { return _anio > 0; }

void Fecha::setFechaInicial() {
  _dia = 1;
  _mes = 1;
  _anio = 2023;
}

void Fecha::validarFecha() {

  if (!mesValido() || !diaValido() || !anioValido()) {
    setFechaInicial();
  }
}

// Convertimos numeros en string con la funcion -->   to_string()
string Fecha::toString() {
  return to_string(_dia) + "/" + to_string(_mes) + "/" + to_string(_anio);
}

void Fecha::AgregarDias(int dias) {
  _dia += dias; // TODO: falta corregir
}
