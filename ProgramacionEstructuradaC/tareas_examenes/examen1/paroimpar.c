#include <stdio.h>
int main(){
   int x,r;
   scanf("%d",&x);
   r = (x % 2);

   if(r == 0){
      printf("Par");
   }else{
      printf("Impar");
   }

   return 0;
}
