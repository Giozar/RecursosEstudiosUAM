#include <iostream>
#include <string>
using namespace std;
int main(){
    string cadena1;
    int tam;
    cout<<"dame cadena de texto"<<endl;
    getline(cin,cadena1);
    tam = cadena1.length();
    cout<<cadena1<<" tiene una longitud de "<<tam<<" caracteres"<<endl;

    //comprara dos cadenas
    //+ es mayor -es menor y 0 son iguales
    int comparacion;
    string cadena2 = "hola";
    comparacion = cadena1.compare(cadena2);

    //tomar parte de una cadena sbtr(inicio de caracter,final de caracter)
    string parte = cadena2.substr(0,1);
    
    


    return 0;
}
