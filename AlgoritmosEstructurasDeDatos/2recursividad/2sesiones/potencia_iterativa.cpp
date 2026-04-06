#include <iostream>
using namespace std;

double potencia(float, float);
int main(){

    double pot;
    float a,b,c;
    cout<<"ingrese a"<<endl;
    cin>>a;
    cout<<"ingrese b"<<endl;
    cin>>b;
    c = b;
    if (b<0)
    {
        b = -b;
    }
    pot = potencia(a,b);
    if (c<0)
    {
        cout <<"La potencia de "<<a <<" ^ "<<b << " es "<<1/pot <<endl;
    }else
    {
        cout <<"La potencia de "<<a <<" ^ "<<b << " es "<<pot <<endl;
    }
    
    return 0;
}

//FUNCION ITERATIVA
double potencia(float a , float b){
    if (b == 0)
    {
        return 1;
    }
    
    float c = 1, d = 0; 
    while (b>0)
    {
        d = a;
        a = a * c;
        c = a;
        a = d;    
        b--;       
    }
    return c;
}