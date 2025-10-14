#include <stdio.h>

long long function(long long n){
    long long x = 0;
    while (n>0)
    {
        for (long long i = 0; i <= n; i++)
        {
            x = x + i;
            //printf("%lld\n",x);
        }
        n--;
    }
    return x;
}

int main(){

    long long n;
    scanf("%lld",&n);
    long long p1 = function(function(function(n)));
    printf("%lld",p1);
    return 0;

}