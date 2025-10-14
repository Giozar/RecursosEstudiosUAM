#include <stdio.h>
int main(){
    int a,b,c,n=0,x=2;
    scanf("%d%d%d",&a,&b,&c);
    for (int i = 0; i <=a; i++)
    {
        if (i%2 != 0)
        {
            n = n + i;
        }
        
    }
    //printf("suma de impares %d\n",n);
    n = n-(x+1);
    for (; x <= b;)
    {
        x = x * 2;
        if (x<=b)
        {
            n = n - x;
        }
    }
    //printf("suma de potencias %d\n",n);
    for (int i = 0; ; )
    {
        
        if (n%c != 0)
        {
            break;
        }
        n= n/c; 
        
    }
    printf("%d",n);
    return 0;    
}