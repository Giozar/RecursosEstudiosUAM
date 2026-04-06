#include <iostream>
using namespace std;

struct Fraccion
{
    int entero;
    int numerador;
    int denominador;
};
void imprimeFraccion(Fraccion);
Fraccion regresaFraccion();

int main(){
    Fraccion recibida;
    Fraccion fracion;
    fracion.entero =3;
    fracion.numerador=8;
    fracion.denominador=4;
    imprimeFraccion(fracion);
    recibida = regresaFraccion();
    imprimeFraccion(recibida);
    return 0;
}
void imprimeFraccion(Fraccion f){
    cout<<f.entero<<""<<f.numerador<<"/"<<f.denominador<<endl;
}

Fraccion regresaFraccion(){
    Fraccion retorno;
    retorno.entero=7;
    retorno.numerador=6;
    retorno.denominador=9;

    return retorno;
}
