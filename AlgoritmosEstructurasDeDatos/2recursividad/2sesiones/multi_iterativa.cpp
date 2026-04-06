#include <iostream>
using namespace std;

double multiplicacion(int, int);

int main(){
    double multi;
    int a,b;
    cout<<"ingrese a"<<endl;
    cin>>a;
    cout<<"ingrese b"<<endl;
    cin>>b;

    multi = multiplicacion(a,b);
    cout <<"La multiplicacion de "<<a<<" por "<<b<<" es "<<multi <<endl;
    return 0;
}

double multiplicacion(int a, int b){
    if (b<0)
    {
        b = -b;
        a = -a;
    }else if ((a == 0|| b == 0))
    {
        return 0;
    }
    
    int c = a;
    for (b+=-1 ; b > 0; b--)
    {
        a += c;
    }
    return a ;
}

