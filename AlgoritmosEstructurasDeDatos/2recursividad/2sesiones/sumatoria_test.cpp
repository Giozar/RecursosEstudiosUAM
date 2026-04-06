#include <iostream>
using namespace std;

double sumatoria1(int, int);
double sumatoria2(int);

int main(){
    int a,b;
    cout<<"ingrese el limite inferior"<<endl;
    cin>>a;
    cout<<"ingrese el limite superior"<<endl;
    cin>>b;
    double suma;
    suma = sumatoria1(b,a);//<----aqui va el limite superior

    cout <<"El sumatoria es "<<suma <<endl;

    return 0;
}

double sumatoria1(int b, int a){
    if (b == a)//<--aqui va el limite inferior
    {
        return b;
    }else
    {
        return b + sumatoria1(b-1,a);
    }
}

