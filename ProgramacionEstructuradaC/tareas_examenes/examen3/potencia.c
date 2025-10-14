#include <stdio.h>
int main()
{

    int n;
    int x;
    int s;

    scanf("%d", &n);
    scanf("%d", &x);
    scanf("%d", &s);

    for (int i = 0; i <= s; i++)//si quiero repetir un cilco n veces ocupo el < que, si quiero ocupar i(necesito el i) hasta n ocupo <= n
    {
        if (i == 0)
        {
            printf("1 \n");
        }
        else if (i == 1)
        {
            printf("%d\n", n);
        }
        else
        {
            n = n * x;
            printf("%d\n", n);
        }
    }

    return 0;
}