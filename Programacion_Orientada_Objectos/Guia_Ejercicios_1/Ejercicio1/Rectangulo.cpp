#include "Rectangulo.h"

// Iniciamos el contructor
Rectangulo::Rectangulo(){
}

// set -> establecemos el valor a los atributos
void Rectangulo::setRectangulo(float base, float altura){
    _base = base;
    _altura = altura;
}

// get --> devolvemos el valor
float Rectangulo::getCalcularArea(){
    return _base * _altura;
}

// get --> devolvemos el valor
float Rectangulo::getCalcularPerimetro(){
    return 2 * (_base + _altura);
}
