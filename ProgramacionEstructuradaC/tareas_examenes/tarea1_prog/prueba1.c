#include <stdio.h>
int main(){
   float PI = 3.14159265358979323846,x,y,z;
   scanf("%f %f %f", &x, &y, &z);
   if(x >= 0 && y >= 0 && z >= 0 && x <= 1000 && y <= 1000 && z <= 1000){
         printf("%f",(x+x*(y+z*z))/((x+PI)*(y+PI)));
   }else{
      printf("los numeros ingresado tienen que ser mayores igual 0 y menores igual a 1000");
   }
   return 0;
}

