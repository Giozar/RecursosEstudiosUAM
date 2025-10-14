#include <stdio.h>
int main(){
    int a,b,c,x,y,z,v1,v2,pa=0,pb=0,pc=0,pf=0;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
    //volumenes
    v1= a*b*c;
    v2=x*y*z;
    //altura
    if (a<=x)
    {
        pa=1;
    }
    if (a<=y)
    {
        pa=1;
    }
    if (a<=z)
    {
        pa=1;
    }
    //ancho
    if (b<=x)
    {
        pb=1;
    }
    if (b<=y)
    {
        pb=1;
    }
    if (b<=z)
    {
        pb=1;
    }
    //altura
    if (c<=x)
    {
        pc=1;
    }
    if (c<=y)
    {
        pc=1;
    }
    if (c<=z)
    {
        pc=1;
    }
    //validaciones
    pf=pa+pb+pc;
    if (pf==3)
    {
        ((v1<=v2) ? printf("1") : printf("0") );
    }else
    {
        printf("0");
    }
    
    return 0;
}