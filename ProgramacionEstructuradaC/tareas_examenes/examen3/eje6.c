#include <stdio.h>
int main(){
    int n,g,i=0;
    scanf("%d",&n);
    g = n;
    while (n != 1)
    {
        if (n%2==0)
        {
            n = n/2;
        }
        else
        {
            n = (n*3)+1;
        }
        if (n>g)
        {
            g=n;
        }
        
        i++;
    }
    printf("%d %d",i,g);
    return 0;
}