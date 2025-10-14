#include <stdio.h>
int main(){
    int r = 0 ,i,a,b;
    char s;
    while (scanf("%d)",&i) == 1)
    {
        scanf("%d%c%d",&a,&s,&b);
        (s==43 ? (r = a + b):(r = a - b));
        printf("%d) %d%c%d=%d\n",i,a,s,b,r); 
    }
    return 0;
}