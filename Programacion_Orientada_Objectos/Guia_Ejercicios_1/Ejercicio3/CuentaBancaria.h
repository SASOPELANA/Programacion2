#pragma once

// Creamos la clase cuenta Bancaria
class CuentaBancaria {
  // Atributos
private:
  int _numCuenta;
  float _saldoActual;

  // Metodos
public:
  CuentaBancaria(int numCuenta, float saldoActual); // -> Constructor
  void Depositar(float monto);
  void Retirar(float monto);
  float getObtenerSaldo();
  int getObtenerNumCuenta();
};
