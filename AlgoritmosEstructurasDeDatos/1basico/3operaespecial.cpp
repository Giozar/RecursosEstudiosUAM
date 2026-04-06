#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a = 81;
    float b = -15;
    int base = 5;
    int exponente = 3;

    float raiz;
    float potencia;
    float absoluto;

    raiz = sqrt(a);
    potencia = pow(base,exponente);

    cout <<"la raiz es de " << a <<" es "<<raiz <<endl;
    cout<< base <<" elevado a " <<exponente << " es " <<potencia<<endl; 
    
    absoluto = fabs(b);
    cout<<"el valor absoluto es "<<absoluto<<endl;

    return 0;


}

