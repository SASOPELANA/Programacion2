/*
    3 Crea una clase llamada CuentaBancaria que represente una cuenta
      bancaria. La clase debe tener los siguientes atributos:

      ● Número de cuenta (entero)

      ● Saldo actual (float)

       Implementa los siguientes métodos:

      ● Un constructor que me permita establecer el número de cuenta y el saldo.

      ● Un método depositar(float monto) que incremente el saldo.

      ● Un método retirar(float monto) que disminuya el saldo si hay fondos
   suficientes, caso contrario no hace nada.

      ● Un método obtenerSaldo() que devuelva el saldo actual
*/

#include "CuentaBancaria.h"
#include <iostream>

using namespace std;

int main() {

  float saldo1 = 0;

  // Creamos el objeto y establemos el valor con el constructor
  CuentaBancaria cuenta1(1425, 100000);
  cout << "\nNUMERO DE CUENTA BANCARIA: " << cuenta1.getObtenerNumCuenta()
       << endl;
  cout << "SU SALDO ACTUAL ES: $" << cuenta1.getObtenerSaldo() << endl;

  int s = 0;
  cout << "\nDesea incremetar el valor de su saldo actual, (1 SI/ 0 NO): ";
  cin >> s;
  while (s == 1) {

    cout << "\nIngrese el valor a incrementar: $";
    cin >> saldo1;
    cuenta1.Depositar(saldo1);

    cout << "\nDesea incremetar el valor de su saldo actual, (1 SI/ 0 NO): ";
    cin >> s;
  }

  s = 0;
  cout << "\nRetirar dinero, (1 SI/ 0 NO): ";
  cin >> s;
  while (s == 1) {
    cout << "\nIngrese el monto a retirar: $";
    cin >> saldo1;

    if (cuenta1.getObtenerSaldo() >= saldo1) {
      cuenta1.Retirar(saldo1);
    } else {
      cout << "\nNo posee fondos suficientes para retirar.\n";
    }

    cout << "\nSU SALDO ACTUAL ES: $" << cuenta1.getObtenerSaldo() << endl;

    cout << "\nRetirar dinero, (1 SI/ 0 NO): ";
    cin >> s;
  }

  cout << "\nSU SALDO ACTUAL ES: $" << cuenta1.getObtenerSaldo() << endl;

  return 0;
}
