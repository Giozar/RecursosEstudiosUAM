#include <stdio.h>
int main(){
    int n=0,a,b,x;
    scanf("%d%d%d",&n,&a,&b);
    
    while (n<1000)
    {
        x = 0;
        if (n%2 == 0)
        {
            for (int i = 0; i < a ; i++)
            {
                x = x + i;
            }
            n = n + x;
        }else
        {
            for (int i = 0; i < b ; i++)
            {
                x = x + i;
            }
            n = n + x;
        }
    }
    printf("%d",n);
    return 0;
}