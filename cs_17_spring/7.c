#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
 int main()
 
 {   setlocale(LC_CTYPE, "Russian");
  
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
     { c = (int)a/100*(int)b;
     }
     
     printf("%.2f\n", c);
     
     return 0;
    
     }
     
