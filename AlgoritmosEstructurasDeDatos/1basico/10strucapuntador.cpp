#include<iostream>
using namespace std;
struct Complejo{
    int real;
    int imaginario;
};
//llenat complejo
void llenarcomplejo(Complejo*);
int main(){
    Complejo A;
    Complejo *ptrComplejo;//apuntador a cpmplejo A

    ptrComplejo = &A;//apunta a A
    A.real = 5;
    A.imaginario = 10;

    cout<<"originalmente: "<<A.real
    <<" "<<A.imaginario<<"i"<<endl;

    cout<<"El apuntador: "<<ptrComplejo->real
    <<" "<<ptrComplejo->imaginario<<"i"<<endl;

    llenarcomplejo(ptrComplejo);

    cout<<"Despues de invocar: "<<A.real
    <<" "<<A.imaginario<<"i"<<endl;
    
}
//recibe apuntador a un complejo
void llenarcomplejo(Complejo *ptrComplejo){
    ptrComplejo->real = 1;
    ptrComplejo->imaginario=8;
}