#include <stdio.h>
int main(){
    float x,y,z;
    scanf("%f %f",&x,&y);
    z = ((x*x*x)+(x*x))/((y*y)-y);
    z= z-((x/y)+5);
    z= z/(2*x);

    printf("%f",z);
    return 0;
}
