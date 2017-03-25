#include <stdlib.h>
#include <stdio.h>
 int main()
 
 {
     int i;
     float  a, b, c;
     char x;
     printf("Введите задание:\n");
     scanf ("%f%c%f", &a, &x, &b); 
     
     if (x == '+')
     {
         c = a + b;
         
     }
     
     if (x == '-')
     { 
         c = a-b;
     }
     
     if (x == '*')
     {
         c = a*b;
     }
     if (x == '/')
     {
         c = a/b;
     }
     if(x == '^')
     c = 1;
        { for (i = 0; i < b; i++)
        c *=a;
        }
     if (x =='%')
     { c = a/100*b;
     }
     
     printf("%.2f\n", c);
     
     return 0;
    
     }
     
