/*
    Gu�a de Ejercicios de Programaci�n Orientada a Objetos

    Clases

    Hacer una clase Fecha que permita generar objetos capaces de almacenar
   fechas y hacer operaciones con las mismas. La clase en ning�n momento debe
   almacenar una fecha inv�lida. Es decir, una fecha que no exista en el
   calendario.

    Actividad 1
    Realizar la declaraci�n de la clase en un archivo H y la definici�n de los
   m�todos en un archivo CPP. La clase fecha debe almacenar los siguientes
   atributos enteros: _dia, _mes y _anio.

    Actividad 2
    Realizar m�todos getters para cada una de las propiedades mencionadas
   anteriormente.

    Actividad 3
    Realizar un constructor que reciba tres par�metros llamados dia, mes y anio.
   El mismo debe almacenar la fecha s�lo si la misma es v�lida. De lo contrario,
   debe asignar por defecto la fecha 1/1/2023.

    Actividad 4
    Realizar un constructor que no reciba par�metros. El mismo debe asignar a la
   fecha el valor 1/1/2023.

    Actividad 5
    Hacer dos m�todos privados llamados AgregarDia y RestarDia. El m�todo
   AgregarDia debe aumentar en uno la fecha y el m�todo RestarDia debe disminuir
   en uno la fecha. Tener en cuenta que los m�todos deben tener en cuenta los
   cambios de mes y a�os si corresponde. Por ejemplo, si la fecha almacenada en
   el objeto es 30/04/2023 y se llama a AgregarDia, entonces la fecha deber�a
   cambiar a 01/05/2023. Por otro lado, si la fecha almacenada es 01/01/2024 y
   se P�gina 1 de 2 llama a RestarDia entonces la fecha deber�a cambiar a
   31/12/2023. Los m�todos deben tener en cuenta los a�os bisiestos para los
   c�lculos.

    Actividad 6
    Hacer un m�todo p�blico llamado AgregarDias que reciba un entero con la
   cantidad de d�as a agregar. El mismo debe a�adir la cantidad de d�as
   recibidos como par�metro si el mismo es positivo o restarlos si valor del
   par�metro en negativo. En caso de ser cero no se debe modificar el estado del
   objeto.

    Actividad 7
    Hacer un m�todo toString que devuelva un string con la fecha que registra el
   objeto en el siguiente formato: DD/MM/AAAA. Por ejemplo, si el objeto
   registra la fecha 5/7/2023 entonces debe devolver el siguiente string:
   "05/07/2023".
*/

#include "Alumno.h"
#include "Fecha.h"
#include <iostream>

using namespace std;

int main() {

  Fecha f(15, 2, 2024);
  Alumno alumno;

  alumno.setFechaNacimiento(
      f); // Envia una copia del objeto. cuando es un objeto envia una copia

  Fecha fechNac = alumno.getFechaNacimiento();
  fechNac.AgregarDias(2);

  alumno.setFechaNacimiento(fechNac);

  cout << "Fecha: " << f.toString() << endl;
  cout << "Alumno fecha de Nacimiento: "
       << alumno.getFechaNacimiento().toString() << endl;

  return 0;
}
