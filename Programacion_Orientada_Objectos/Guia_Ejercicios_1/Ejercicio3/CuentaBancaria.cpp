#include "CuentaBancaria.h"

// Ininciamos el construtor --> establacemos lso valores en el cosntructor
CuentaBancaria::CuentaBancaria(int numCuenta, float saldoActual) {

  _numCuenta = numCuenta;
  _saldoActual = saldoActual;
}

// Metodos
void CuentaBancaria::Depositar(float monto) { _saldoActual += monto; }

void CuentaBancaria::Retirar(float monto) {
  if (_saldoActual >= monto) {
    _saldoActual -= monto;
  }
}

float CuentaBancaria::getObtenerSaldo() { return _saldoActual; }

int CuentaBancaria::getObtenerNumCuenta() { return _numCuenta; }
