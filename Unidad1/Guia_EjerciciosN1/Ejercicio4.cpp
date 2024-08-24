/*
  4 Una fundación que se dedica a fomentar la adopción de mascotas dispone de
los registros de adopciones del año 2024. Por cada adopción que se haya
efectuado se registró:
- Mes de la adopción (entero entre 1 y 12)
- Tipo de animal adoptado (entero entre 10 y 15)
- Edad del adoptante responsable
- Tipo de vivienda del adoptante responsable (entero entre 1 y 5)
La información no se encuentra agrupada ni ordenada bajo ningún criterio. Para
indicar el fin de la carga de datos se ingresa un mes de adopción igual a cero.
Se pide calcular e informar
A) El tipo de animal más adoptado en general.
B) El promedio de edad de los adoptantes de cada tipo de animal.
C) Por cada tipo de animal y tipo de vivienda la cantidad total de
adopciones registradas.
Aclaración:
Los tipos de animales son:
10 - Perro, 11 - Gato, 12 - Conejo, 13 - Hurón, 14 - Caballo, 15 - Oveja
Los tipos de vivienda son:
1 - Casa, 2 - Departamento, 3 - Casa Quinta, 4 - Finca, 5 - Duplex
*/
#include <iostream>
using namespace std;

void verFundacion();
void tiposAnimales();
string AnimalMaxAdoptado(int animal);

int main()
{
  int mesAdopcion = 0;
  int tipoAnimal = 0;
  int edadAdoptante = 0;
  int tipoVivienda = 0;

  // Contadores y acumuladores
  int adopciones[6]{};
  int acuEdad[6]{};
  int cantidadAdopciones[6]{};
  int matAdoVviendas[6][5]{};

  // llamamos a la funcion verFundacion
  verFundacion();
  tiposAnimales();

  // Estructura
  cout << "\nIngrese el mes de la adopcion (1 y 12) (cero 0 para fincalizar la "
          "carga): ";
  cin >> mesAdopcion;

  while (mesAdopcion != 0)
  { // Estructura

    cout << "Ingrese el tipo de animal adoptado (10 y 15): ";
    cin >> tipoAnimal;

    cout << "Ingrese la edad del adoptante: ";
    cin >> edadAdoptante;

    cout << "Ingrese el tipo de vivienda del adoptante (1 y 5): ";
    cin >> tipoVivienda;

    // Punto A
    int indexAnimal = tipoAnimal - 10;
    adopciones[indexAnimal]++;

    // Punto B
    acuEdad[indexAnimal] += edadAdoptante;

    // Punto C
    matAdoVviendas[indexAnimal][tipoVivienda - 1]++;

    cout << "Ingrese el mes de la adopcion (1 y 12) (cero 0 para fincalizar la "
            "carga): ";
    cin >> mesAdopcion;
  } // --> FIN DEL CICLO WHILE

  // Punto A~
  int maxAdoptado = 0;
  int tipoAnimalMax = 0;
  for (int x = 0; x < 6; x++)
  {
    if (adopciones[x] > maxAdoptado)
    {
      maxAdoptado = adopciones[x];
      tipoAnimalMax = x + 10;
    }
  }

  string maxAnimal = AnimalMaxAdoptado(tipoAnimalMax);
  // Mostramos el punto A
  cout << "El animal mas adoptado es: " << tipoAnimalMax << ". Tipo "
       << maxAnimal << endl;

  // Punto B~
  cout << "\nPromedio de edad de los adoptantes: " << endl;
  float promedioEdad = 0.0;
  for (int x = 0; x < 6; x++)
  {
    if (adopciones[x] > 0)
    {
      promedioEdad = (float)acuEdad[x] / adopciones[x];
      cout << "Tipo de animal: " << x + 10 << " - Promedio de edad del adoptante: " << promedioEdad << endl;
    }
    else
    {
      cout << "Tipo de animal: " << x + 10 << " - No hay adopciones registradas." << endl;
    }
  }

  // Punto C
  cout << "\nCantidad de adopciones por tipo de animal y tipo de vivienda: " << endl;
  for (int x = 0; x < 6; x++)
  {
    cout << "Tipo de animal " << x + 10 << " (" << AnimalMaxAdoptado(x + 10) << "):" << endl;
    for (int j = 0; j < 5; j++)
    {
      cout << "  Vivienda tipo " << j + 1 << ": " << matAdoVviendas[x][j] << " adopciones" << endl;
    }
  }

  return 0;
}

void verFundacion()
{
  cout << "\n         -- FUNDACION DE ADOPCIONES DE MASCOTAS -- \n";
  cout << "                       REGISTROS 2024    \n";
  cout << "\n";
}

void tiposAnimales()
{
  string vecAni[6]{"Perro", "Gato", "Conejo", "Huron", "Caballo", "Oveja"};
  cout << "Tipos de animales: " << endl;
  for (int x = 0; x < 6; x++)
  {
    cout << "# " << x + 10 << " " << vecAni[x] << ". ";
  }
  cout << "\n";
}

string AnimalMaxAdoptado(int animal)
{
  string vecAni[6]{"Perro", "Gato", "Conejo", "Huron", "Caballo", "Oveja"};
  string maxANIMAL;

  int maxIndex = animal - 10;
  return vecAni[maxIndex];
}
