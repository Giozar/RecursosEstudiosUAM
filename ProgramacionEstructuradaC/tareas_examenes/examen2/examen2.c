#include <stdio.h>
#include <math.h>
int main()
{
    float x, z,y, resultado;
    scanf("%f %f %f", &x, &y, &z);
    resultado = (((pow(x,1.2*y))-z+5.7))/((x+2*y+3*z)/(x*y));
    printf("%f\n", resultado);
    return 0;
}
