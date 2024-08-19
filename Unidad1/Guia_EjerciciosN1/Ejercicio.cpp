/*
  1 Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego
  de cargar todas las notas:

  - Pedir un número y mostrar por pantalla la nota registrada. Por ejemplo, se
  ingresa 10 para mostrar el décimo examen.

  - Listar cuántos estudiantes obtuvieron una nota mayor al promedio.
*/

#include <iostream>
using namespace std;

// Declaramos las funciones
void cargarNotas(int vec[]);           // Punto 1
void mostrarNotaRegistrada(int vec[]); // Punto 2
void notasMayorPromedio(int vec[]);    // Punto 3

int main() {

  // Punto 1
  int vec1[6];
  cargarNotas(vec1);
  system("pause");

  // Punto 2
  mostrarNotaRegistrada(vec1);

  // Punto 3
  notasMayorPromedio(vec1);

  return 0;
}

// Punto 1
void cargarNotas(int vec[]) {

  int nota = 0;

  for (int x = 0; x < 6; x++) {
    cout << "Ingrese la nota del primer parcial de los estudiantes del curso: ";
    cin >> nota;
    vec[x] = nota;
  }
}

// Punto 2
void mostrarNotaRegistrada(int vec[]) {
  int numExamen = 0;
  cout << "\nIngrese el numero de examen para mostrar: ";
  cin >> numExamen;

  for (int x = 1; x <= 6; x++) {
    if (x == numExamen) {
      cout << "Numero de examen: " << x << ", y su nota es: " << vec[x - 1]
           << endl;
      break;
    } else if (x == 6) {
      cout << "Examen no registarado." << endl;
    }
  }
}

// Punto 3
void notasMayorPromedio(int vec[]) {
  int promedio = 0, conMaxPromedio = 0;
  int acumulador;

  for (int x = 0; x < 6; x++) {
    acumulador += vec[x];
  }

  promedio = acumulador / 6;

  for (int i = 0; i < 6; i++) {
    if (promedio < vec[i]) {
      conMaxPromedio++;
    }
  }

  if (conMaxPromedio > 0) {
    cout << "\nLa cantidad de alumnos con notas mayor al promedio son: "
         << conMaxPromedio << endl;
  } else {
    cout << "\nNo hay alumnos con notas mayor al promedio." << endl;
  }
}
