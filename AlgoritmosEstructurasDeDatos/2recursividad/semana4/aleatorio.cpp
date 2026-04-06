#include <ctime>
#include <iostream>

using namespace std;

int main(){
srand((unsigned)time(NULL));

int num, n;

//Genera 10 n�meros aleatorios entre 1 y 20
for (int i=0;i<10;i++){
    n=rand()%20+1;
    cout << n << endl;
}

}
