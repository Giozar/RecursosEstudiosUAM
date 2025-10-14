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
    //coincidencias
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        tam = tam + a[i];
        arr[i] = tam;
        for (int j = 0; j < n; j++)
        {
            if (tam == p[j])
            {
                coin++;
            }
        }
    }
    //tamaños repetidos
    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                coin--;
            }
            
        }
        
    }
    printf("%d",coin);
    return 0;
}