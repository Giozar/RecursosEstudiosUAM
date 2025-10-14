#include <stdio.h>
int main(){
    //tamaño de arreglo
    int n,res = 1;
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
    //mostrar elementos
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<=arr2[i])
        {
            res = 0;
            break;
        }
        
    }
    printf("%d",res);
    
    
    return 0;
}