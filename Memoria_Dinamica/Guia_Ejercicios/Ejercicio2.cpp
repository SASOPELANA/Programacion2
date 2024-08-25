/*
  2 Crear un programa que contenga un menú con las siguientes opciones:
    1- Cargar Vector: El programa debe solicitar al usuario la cantidad de
  elementos que va a cargar, posteriormente se solicitara cuales son dichos
  números para almacenarlos en un vector utilizando asignación dinámica de
  memoria.

    2- Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por
  pantalla.

    3- Salir: Sale del programa (no olvidar liberar la memoria) Pista:
        Recordar que se puede inicializar un puntero con el valor nullptr
*/
#include <cstdlib>
#include <iostream>
using namespace std;

// Prototipo de funciones
void verMenu();
void ElegirOpciones(int *&v, int &tamanio);
void CargarVectorDinamico(int *&v, int &tamanio);
void MostrarVectorDinamico(int *v, int tamanio);

int main() {

  int *v = nullptr;
  int tamanio = 0;

  verMenu();
  ElegirOpciones(v, tamanio);

  // liberamos memoria
  delete[] v;
  v = nullptr;

  return 0;
}

void verMenu() {

  cout << "\n    --- OPCIONES DEL PROGRAMA --- " << endl;
  cout << "\n      1_ Cargar Vector Dinamico. \n";
  cout << "      2_ Mostrar Vector Dinamico.\n";
  cout << "      3_ Salir del Programa. \n";
  cout << "\n";
}

void ElegirOpciones(int *&v, int &tamanio) {

  int opcion = 0;

  cout << "\nIngrese una opcion: ";
  cin >> opcion;

  switch (opcion) {
  case 1:
    cout << "\n1_ Cargar vector Dinamico." << endl;
    CargarVectorDinamico(v, tamanio);
    // cout << "\n";
    ElegirOpciones(v, tamanio);

    break;
  case 2:
    cout << "\n2_ Mostrar vector dinamico. " << endl;
    MostrarVectorDinamico(v, tamanio);
    // cout << "\n";
    ElegirOpciones(v, tamanio);

    break;
  case 3:
    cout << "\n3_Salir del programa." << endl;
    return;

  default:
    cout << "Opncion no valida. Ingrese datos validos";
    ElegirOpciones(v, tamanio);
    break;
  }
}

// Funcion opcion 1
void CargarVectorDinamico(int *&v, int &tamanio) {

  cout << "Ingrese el tamanio del Vector Dinamico: ";
  cin >> tamanio;

  while (tamanio <= 0) {
    cout << "Ingrese un numero mayor a cero: ";
    cin >> tamanio;
  }

  // creamos el vector dinamico
  v = new int[tamanio];

  // verificar si tenemos memoria disponible para arreglo dinamico
  if (v == nullptr) {
    cout << "Error al asignar memoria.\n";
    exit(-1); // Salimos del programa
  }

  // For para cargar los datos del vector
  for (int x = 0; x < tamanio; x++) {
    cout << "Ingrese datos al Arreglo Dinamico: ";
    cin >> v[x];
  }
}

// funcion 2
void MostrarVectorDinamico(int *v, int tamanio) {

  // Verficamos si el vector tiene valores
  if (v == nullptr) {
    cout << "\nEl vector no tiene valores. \n";
    return;
  }

  cout << "\nArreglo Dinamico. " << endl;
  for (int x = 0; x < tamanio; x++) {
    cout << v[x] << endl;
  }
}
