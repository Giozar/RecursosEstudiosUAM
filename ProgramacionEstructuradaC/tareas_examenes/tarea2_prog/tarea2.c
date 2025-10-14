#include <stdio.h>
int main()
{
   int r, s, l, d, ed, ef;
   scanf("%d%d%d", &r, &s, &l);
   if (!(s == r + 1))
   {
      ef = 1;
      while (!(ef <= 0))
      {
         d = s - r;
         ed = d - 1;
         if (ed < 0)
         {
            ed = ed * (-1);
         }
         ef = 4 - ed;
         if (ef <= 0)
         {
            if (s >= l)
            {
               l = s + 1;
               printf("%d %d %d", r, s, l);
            }
            else
            {
               printf("%d %d %d  ", r, s, l);
            }
         }
         s++;
      }
   }
   else if (l > s)
   {
      ef = 1;
      while (!(ef <= 0))
      {
         d = l - s;
         ed = d - 1;
         if (ed < 0)
         {
            ed = ed * (-1);
         }
         ef = 4 - ed;

         if (ef <= 0)
         {
            printf("%d %d %d  ", r, s, l);
         }

         l++;
      }
   }
   return 0;
}
