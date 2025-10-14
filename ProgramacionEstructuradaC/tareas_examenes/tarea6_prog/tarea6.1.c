#include <stdio.h>
int main(){
    int n;
    //tamaño de matriz
    scanf("%d",&n);
    int p[n][n];
    //leer matriz
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&p[i][j]);
        }  
    }
    //matriz temporal
    int m[n][n];
    //empieza ciclo
    for (int k = 0; k<9 ; k++)
    {
        //llenar matriz temporal
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m[i][j] = p[i][j];
            }  
        }
        //verificar flor
        for (int i = 1; i < n-1; i++)
        {
            for (int j = 1; j < n-1; j++)
            {
                if ((p[i][j] == p[i-1][j-1]) && (p[i][j] == p[i-1][j]) && (p[i][j] == p[i-1][j+1]) && (p[i][j] == p[i][j-1]) && (p[i][j] == p[i][j+1]) && (p[i][j] == p[i+1][j-1]) && (p[i][j] == p[i+1][j]) && (p[i][j] == p[i+1][j+1]))
                {
                    if (p[i][j]>0 && p[i][j]<9)
                    {
                        m[i][j] = p[i][j]+1;
                    }
                }
                
            }    
        }

        //actualizar matriz original
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                p[i][j] = m[i][j];
            }  
        }
    }
    
    //mostrar matriz orifginal
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");    
    }  
    return 0;
}