int main()
{
   int r, s, l, d;
   scanf("%d%d%d", &r, &s, &l);
   if (s == r + 1)
   {
      d = (l - s) - 1;
      printf("la distancia es: %d \n", d);
      if (d < 4)
      {
         switch (d)
         {
         case 0:
            l = l + 4;
            printf("%d %d %d", r, s, l);
            break;
         case 1:
            l = l + 3;
            printf("%d %d %d", r, s, l);
            break;
         case 2:
            l = l + 2;
            printf("%d %d %d", r, s, l);
            break;
         case 3:
            l = l + 1;
            printf("%d %d %d", r, s, l);
            break;
         default:
            printf("%d %d %d", r, s, l);
         }
      }
      else
      {
         printf("%d %d %d", r, s, l);
      }
   }
   else if (s >= r + 2)
   {
      d = (s - r) - 1;
      printf("la distancia es: %d \n", d);
      switch (d)
      {
      case 0:
         s = s + 4;
         d = (l - s) - 1;
         if (d < 4)
         {
            l = s + 1;
         }
         printf("%d %d %d", r, s, l);
         break;
      case 1:
         d = (l - s) - 1;
         if (d < 3)
         {
            s = s + 3;
            l = s + 1;
         }
         else
         {
            s = s + 3;
         }

         printf("%d %d %d", r, s, l);
         break;
      case 2:
         d = (l - s) - 1;
         if (d <= 1)
         {
            s = s + 2;
            l = s + 1;
         }
         else
         {
            s = s + 2;
         }

         printf("%d %d %d", r, s, l);
         break;
      case 3:
         d = (l - s) - 1;
         if (d == 0)
         {
            s = s + 1;
            l = s + 1;
         }
         else
         {
            s = s + 1;
         }
         printf("%d %d %d", r, s, l);

         break;
      case 4:
         printf("%d %d %d", r, s, l);
         break;
      default:
         printf("%d %d %d", r, s, l);
      }
   }
   return 0;
}