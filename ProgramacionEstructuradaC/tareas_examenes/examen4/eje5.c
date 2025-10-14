#include <stdio.h>
int main(){
    //tamaño de arreglo
    int n,r=0;
    scanf("%d",&n);
    int arr[n],arr2[n];
    //leer elementos
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }
    //sumar elementos y mostrar
    for (int i = 0; i < n; i++)
    {
        r = r + (arr[i]*arr2[i]);
    }
    printf("%d",r);
    return 0;
}