#include <iostream>
using namespace std;
int main(){
    string cadena;
    string cadenaEspacios;
    string descripcion;
    int numero;
    cadena = "hola we";
    cout<<cadena<<endl;
    cout<<"introduce tu nombre completo"<<endl;
    getline(cin,cadenaEspacios);
    cout<<endl;
    cout<<"tu nombre es "<<cadenaEspacios<<endl;
    cout<<"ingresa tu edad "<<endl;
    cin>>numero;
    //agrgar antes de cada cadena larga y con espacios
    cin.ignore(100,'\n');
    cout<<"hola "<<cadenaEspacios<<" ingresa tu descripcion"<<endl;
    getline(cin,descripcion);
    cout<<"hola "<<cadenaEspacios<<" tu descripcion es"<<endl;
    cout<<descripcion<<endl;




    
    return 0;
}