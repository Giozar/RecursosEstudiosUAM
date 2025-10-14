#include <stdio.h>
int main(){
    int d,s,g,gm,t,tm,l,lm,i; 
    scanf("%d%d%d%d%d",&d,&s,&g,&t,&l);
    for ( i = 0; i <= s; i++)
    {
        gm = g * i;
        if(gm>=d){
            while (gm>=d)
            {
                gm = gm - d;
            }   
        }

        tm = t * i;
        if(tm>=d){
            while (tm>=d)
            {
                tm = tm - d;
            }   
        }

        lm = l * i;
        if(lm>=d){
            while (lm>=d)
            {
                lm = lm - d;
            }   
        }

        //printf("%d %d %d en tiempo = %d\n",gm,tm,lm,i);

        if ((gm==tm) &&  (tm==lm))
        {
            printf("Al segundo %d\n coinciden los tres\n",i);
        }else
        if (gm==tm)
        {
            printf("Al segundo %d\n coinciden el grifo y la tortuga\n",i);
        }else
        if (gm==lm)
        {
            printf("Al segundo %d\n coinciden el grifo y la langosta\n",i);
        }else
        if (lm==tm)
        {
            printf("Al segundo %d\n coinciden la tortuga y la langosta\n",i);
        } 
    }
    return 0;
}