#include <stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    while (n<30000)
    {
        n = n*n;
        i++;
    }
    printf("%d %d",n,i);
    return 0;
}