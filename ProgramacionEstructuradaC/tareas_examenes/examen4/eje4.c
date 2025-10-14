#include <stdio.h>
int main(){
    //tamaño de arreglo
    int n;
    scanf("%d",&n);
    int x = n-1, arr[n];
    //leer elementos
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //sumar elementos y mostrar
    for (int i = 0; i < (n/2); i++)
    {
        printf("%d ",arr[i]+arr[x]);
        x--;
    }
    
    
    return 0;
}