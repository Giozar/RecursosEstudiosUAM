#include <iostream>
using namespace std;
struct Complejo
{
    int real;
    int imaginario;
};

int main(){

    Complejo complejo1[10];

    for (int i = 0; i < 10; i++)
    {
        complejo1[i].real = i;
        complejo1[i].imaginario = i*2;
    }

    cout<<"los complejos son "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"real es: "<<complejo1[i].real<<endl;
        cout<<"imaginario es: "<<complejo1[i].imaginario<<endl;
    }
    
        

    return 0;
}
