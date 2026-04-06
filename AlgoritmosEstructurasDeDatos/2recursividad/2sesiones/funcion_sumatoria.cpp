#include <iostream>
using namespace std;

double polinomio(int);

int main(){
    int a;
    double poli;
    cout<<"ingrese el limite de la suma"<<endl;
    cin>>a;
    poli = polinomio(a);
    cout <<"la suma es "<<poli <<endl;
    if (poli == 0)
    {
        cout<<"Dado que el límite inferior de la suma es mayor que el límite superior de la suma, es una suma vacía y su valor se define como cero"<<endl;
    }
    
return 0;
}

double polinomio(int a){
    if (a < 0)
    {
        return 0;
    }else
    {
        return ((a*a*a)+(3*a*a)-(2*a)+6)+polinomio(a-1);
    }
}