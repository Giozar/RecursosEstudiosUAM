#include <stdio.h>
int main(){
    //tamaño de arreglo
    int n,ul,pri,der,izq;
    scanf("%d",&n);
    scanf("%d",&der);
    scanf("%d",&izq);
    int arr[n];
    //leer elementos
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //modificar elementos
    for (int j = 0; j < der; j++)
    {
        ul = arr[n-1];
        for (int i = n-1; i >= 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = ul;
    }
    

    ///modificar elementos
    for (int j = 0; j < izq; j++)
    {
        pri = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = pri;
    }
    

    //mostrar elementos
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}