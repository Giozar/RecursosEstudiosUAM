#include <stdio.h>
int main(){
    //tamaño de arreglo
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    //leer elementos
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }

    //comparar


    //mostrar elementos baja
    for (int i = 0; i < n; i++)
    {
        (arr[i] <= arr2[i] ? printf("%d ",arr[i]):printf("%d ",arr2[i]));
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        (arr[i] >= arr2[i] ? printf("%d ",arr[i]):printf("%d ",arr2[i]));
    }
    
    
    return 0;
}