#include <stdio.h>
int main(){
    int n, i = 0; //declaro n el numero de entrada e i que es mi contador de los pasos
    scanf("%d",&n);//le doy un numero de entrada que será
    int m = n;//m sera mi numero mayor que sera desde un principio n
    while (n != 1)//si n es diferente de uno, entra a un ciclo infinito y saldra del ciclo hasta que sea n sea uno
    {
        if (n%2==0)//si n es par
        {
            n = (n/2);//n se divide entre dos
        }else//de lo contrario, osea si n es impar
        {
            n = (n*3)+1;//hace esta operacion
        }
        i++;//mi contador de pasos se incrementa en uno en cada ciclo
        if (n>m)//si n es mayor a mi numero mayor
        {
            m = n;//mi numero mayor se actualiza al nuevo numero mayor que es n
        }
    }//se termina el cicloo
    printf("%d %d",m,i);//imprime el numero mayor final y la cantidad de pasos para llegar a uno
    
    return 0;
}