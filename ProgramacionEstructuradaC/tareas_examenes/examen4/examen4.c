#include <stdio.h>
int main(){
    //tamaño de arreglo
    int n;
    scanf("%d",&n);
    int arr[n];
    //leer elementos
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //mostrar elementos
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}