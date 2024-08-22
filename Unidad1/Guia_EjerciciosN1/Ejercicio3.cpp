/*
  3 Una persona desea registrar los gastos realizados durante un mes. Ha
  definido que los gastos se pueden categorizar en:

    ID de Categoría      Nombre de categoría
    1                    Servicios
    2                    Alimentación
    3                    Limpieza
    4                    Transporte
    5                    Educación
    6                    Salud
    7                    Ocio
    8                    Impuestos
    9                    Vestimenta
    10                   Inversiones

    Por cada gasto registrado se ingresa el siguiente registro:
  - Día (número entero)
  - ID de Categoría de gasto (número entero entre 1 y 10)
  - Importe del gasto (número real)
    La información no se encuentra agrupada ni ordenada. No se sabe de antemano
    cuántos registros de gastos habrá. El fin de la carga de información se
    indica con un día igual a cero. Calcular e informar:
    A) La categoría de gasto que mayor dinero se haya destinado y cuál es dicha categoría.
    B) Por cada categoría de gasto, el nombre de la categoría y el total acumulado en concepto
      de gastos del mes.
    C) La cantidad de categorías de gasto que no hayan
      registrado movimientos.
    D) Por cada día, la cantidad de gastos que se hayan registrado. Sólo mostrar aquellos registros de días que hayan registrado
      gastos.
*/
#include <iostream>
#include <string>
using namespace std;

// Definimos las funciones
void VerCategorias();
void Categorias(string categorias[]);

int main()
{
  // Llamamos a la función Categoria
  VerCategorias();

  // Variables
  int dia = -1, idCategoria = 0;
  float importe = 0.0;
  float acuTotalCategoria[10] = {0.0};
  int gastosPorDia[30] = {0};
  float resgistrosPorDia[30] = {0.0};

  // Estrustura
  while (dia != 0)
  {
    cout << "Ingrese el dia del mes (0 para salir): ";
    cin >> dia;

    if (dia == 0)
    {
      break;
    }
    cout << "Ingrese el ID de la categoria (numero entre el 1 y 10): ";
    cin >> idCategoria;

    cout << "Ingrese el importe del gasto: ";
    cin >> importe;

    // Acumular categoria mayor gastos
    if (idCategoria >= 1 && idCategoria <= 10 && dia >= 1 && dia <= 30)
    {
      acuTotalCategoria[idCategoria - 1] += importe;

      // Contador de vector gastos por dia
    if (dia >= 1 && dia <= 30)
    {
      gastosPorDia[dia - 1]++;
    }
      // Punto B
      resgistrosPorDia[dia - 1] += importe;
    }else {
      cout << "\n-- Datos no validos, intente de nuevo. --\n";
    }

  } // Fin Bucle While

  cout << "\n";

  // Punto A
  int categoriaMayorGasto = 0;
  float mayorGasto = 0.0;
  for (int x = 0; x < 10; x++)
  {
    if (acuTotalCategoria[x] > mayorGasto)
    {
      mayorGasto = acuTotalCategoria[x];
      categoriaMayorGasto = x + 1; // posicion de la categoria de mayor gasto
    }
  }

  // Punto C
  int categoriaSinGatos = 0;
  for (int x = 0; x < 10; x++){
    if (acuTotalCategoria[x] == 0){
      categoriaSinGatos++;
    }
  }

  // Mostramos el punto A
  cout << "----- Punto A -----" << endl;
  if (categoriaMayorGasto > 0)
  {
    cout << "La categoria de mayor gastos es: " << categoriaMayorGasto << ", con un gasto de $" << mayorGasto;
  }
  else
  {
    cout << "No se registraron datos o se ingresaron datos invalidos.\n";
  }

  // Punto B
  cout << "\n";
  string categorias[10];
  Categorias(categorias);
  bool gastos = true;

  cout << "\n---- Punto B ----\n";
  for (int i = 0; i < 10; i++)
  {
    if (acuTotalCategoria[i] > 0)
    {
      gastos = false;
      cout << "Categoria " << categorias[i] << " y su gasto total por mes: $" << acuTotalCategoria[i] << "\n";
    }
  }

  if (gastos){
    cout << "No se registraron gastos." << endl;
  }

  // Punto C
  cout << "\n";
  cout << "---- Punto C ----\n";
  if (categoriaSinGatos > 0){
    cout << "La cantidad de categorias que no registraron gastos o movimientos son: " << categoriaSinGatos << endl;
  }else {
    cout << "Todas las categorias tienen gastos.\n";
  }

  // Punto D
  cout << "\n---- Punto D ----\n";
  // Punto D
  for (int x = 0; x < 30; x++){
    if (gastosPorDia[x] > 0){
      cout << "Dia " << x + 1 << ". Gasto $" << resgistrosPorDia[x] << endl;
    }
  }

  cout << "\n";

  return 0;
}

// Funciones
void VerCategorias()
{

  int id = 10;
  string categorías[10] = {
      "Servicios", "Alimentacion", "Limpieza", "Transporte", "Educacion",
      "Salud", "Ocio", "Impuestos", "Vestimenta", "Inversiones"};

  cout << "\n                  Categorias de gastos:\n";
  cout << "--------------------------------------------------------------\n";
  cout << "\n";

  for (int x = 0; x < id; x++)
  {
    cout << "Id de Categoria -> " << x + 1 << ". Nombre de la Categoria -> "
         << categorías[x] << "\n";
  }

  cout << "--------------------------------------------------------------\n";
  cout << "\n";
}

void Categorias(string categorias[])
{
  categorias[0] = "Servicios";
  categorias[1] = "Alimentacion";
  categorias[2] = "Limpieza";
  categorias[3] = "Transporte";
  categorias[4] = "Educacion";
  categorias[5] = "Salud";
  categorias[6] = "Ocio";
  categorias[7] = "Impuestos";
  categorias[8] = "Vestimenta";
  categorias[9] = "Inversiones";
}