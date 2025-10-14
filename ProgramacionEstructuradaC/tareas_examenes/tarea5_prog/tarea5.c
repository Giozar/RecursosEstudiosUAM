#include <stdio.h>
int main(){
    int n,m,tam = 1,coin=0;
    //nidos
    scanf("%d",&n);
    int p[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    //alicia
    scanf("%d",&m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    //muestras
    printf("nidos:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",p[i]);
    }
    printf("alicia:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d \n",a[i]);
    }    
    //tamaños de alicia
    int arr[m];
    printf("tamaños\n");
    for (int i = 0; i < m ; i++)
    {
        tam = tam + a[i];
        arr[i] = tam;
    }
    //muestra tamaños
    for (int i = 0; i < m; i++)
    {
        printf("%d \n",arr[i]);
    }
    //coincidencias
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //printf("valores nido%d \n",p[i]);
            printf("nido: %d tamaño alicia: %d \n",p[i],arr[j]); 
            if (p[i]==arr[j])
            {
                printf("nido: %d tamaño alicia: %d \n",p[i],arr[j]); 
                coin++;
                break;
            }
        }
        
    }
    printf("coincidencia final: %d \n",coin);
    return 0;
}