#include <stdio.h>
int main(){
    int n1,n2,pa=0,im=0;
    scanf("%d",&n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&n2);
        if (n2%2==0)
        {
            pa++;
        }
        else
        {
            im++;
        }
    }
    printf("%d %d",pa,im);
    
    return 0;
}
