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
    //tamaños de alicia
    int arr[m];
    for (int i = 0; i < m ; i++)
    {
        tam = tam + a[i];
        arr[i] = tam;
    }
    //coincidencias
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (p[i]==arr[j])
            {
                coin++;
                break;
            }
        }
        
    }
    printf("%d",coin);
    return 0;
}