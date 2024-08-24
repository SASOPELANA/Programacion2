#include <iostream>

using namespace std;

int main() {
  int codigoVenta = -1;
  int mesVenta = 0;
  int diaVenta = 0;
  float montoVenta = 0.0;
  int cantidadMeses = 0;

  // Vector de meses
  string vecMeses[12]{"Enero",      "Febrero", "Marzo",     "Abril",
                      "Mayo",       "Junio",   "Julio",     "Agosto",
                      "Septiembre", "Octubre", "Noviembre", "Diciembre"};

  // Declaramos una matriz para acumular monto de venta del mes y de su dia
  float recaudacion[12][31]{};

  cout << "Ingrese el codigo de venta (o cero para finalizar 0): ";
  cin >> codigoVenta;

  while (codigoVenta != 0) {

    cout << "Ingrese el mes de la venta (1 y 12): ";
    cin >> mesVenta;

    cout << "Ingrese el dia de la venta (1 y 31): ";
    cin >> diaVenta;

    cout << "Ingrese el monto de venta: $";
    cin >> montoVenta;

    // Acumulo los montos
    recaudacion[mesVenta - 1][diaVenta - 1] += montoVenta;

    cout << "Ingrese el codigo de venta (o cero para finalizar 0): ";
    cin >> codigoVenta;
  }

  cout << "\n";

  for (int m = 0; m < 12; m++) {
    cout << "----- Mes de " << vecMeses[m] << endl;
    bool hayVenta = false;
    for (int d = 0; d < 31; d++) {
      if (recaudacion[m][d] != 0) {
        cout << "  ->  Dia #" << d + 1 << ": " << recaudacion[m][d] << "\n";
        hayVenta = true;
      }
    }

    if (!hayVenta) {
      cantidadMeses++;
    }
  }

  cout << "\n";

  cout << "La cantidad de meses sin ventas son: " << cantidadMeses << endl;

  return 0;
}
