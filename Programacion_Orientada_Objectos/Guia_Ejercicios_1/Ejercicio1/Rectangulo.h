#pragma once

// Definimos la clase
class Rectangulo{
    // Atributos
    private:
        float _base, _altura;

    // Metodos
    public:
        Rectangulo(); // -> contructor
        void setRectangulo(float base, float altura); // Metodo set --> establecemos el valor de los atributos
        float getCalcularArea(); // metodo get -> obtenemos el valor -> return
        float getCalcularPerimetro(); // get obtemeos el valor
};
