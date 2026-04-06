#include <iostream>
using namespace std;

double potencia(int, int);

int main(){
    double pot;
    int a,b,c;
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
        cout <<"La potencia de "<<a <<" ^ "<<b << " es 1/"<<pot <<endl;
    }else
    {
        cout <<"La potencia de "<<a <<" ^ "<<b << " es "<<pot <<endl;
    }
    
    

return 0;
};
//FUNCION RECURSIVA
double potencia(int a, int b){
    if (b==0)
    {
        return 1;
    }else
    {
        return a * potencia(a,b-1);
    }
    
    
    

}