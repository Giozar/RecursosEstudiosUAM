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
    if (b == 0)
    {
        return 0;
    }
    if (b<0)
    {
        b = -b;
        a = -a;
        return a + multiplicacion(a,b-1);
    }else
    {
        return a + multiplicacion(a,b-1);
    }
    
    

}