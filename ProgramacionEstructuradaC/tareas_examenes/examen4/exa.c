
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int mat1[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
//imprime original
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //intercambia fila
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i==0)
            {
                printf("%d ", mat1[n-1][j]);
            }
            else if(i==n-1)
            {
                printf("%d ", mat1[0][j]);
            }
            else
            {
                printf("%d ", mat1[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");

    //intercambia columna

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (j==0)
            {
                printf("%d ", mat1[i][m-1]);
            }
            else if (j == m-1)
            {
                printf("%d ", mat1[i][0]);
            }
            else
            {
                printf("%d ", mat1[i][j]);
            }
            
        }
        printf("\n");
    }
    return 0;
}