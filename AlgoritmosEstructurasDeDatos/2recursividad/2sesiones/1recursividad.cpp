#include <iostream>
using namespace std;

double factorial(int );

int main(){
    double fact;
    fact = factorial(5);

    cout <<"El factorial es "<<fact <<endl;
    return 0;
}

double factorial(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }else
    {
        return n*factorial(n-1);
    }
    
    
}