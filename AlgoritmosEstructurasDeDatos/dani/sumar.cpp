#include <iostream>
using namespace std;
void pedirDatos();

int calcularSuma(int vec[], int tam);

int main(){

    pedirDatos();

    cout<<"la suma del vector es"<<calcularSuma(vec, tam)<<endl;

    
return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del vector";
    cin>>tam;
    cout<<"Digite los de elementos del vector";
    for (int i = 0; i < tam; i++)
    {
        cin>>vec[i];
    }
}

int calcularSuma(int vec[], int tam){
    int suma = 0;
    for (int i = 0; i < tam; i++)
    {
        suma += vec[i];
    }

    return suma;
    
}