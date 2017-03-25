#include <stdio.h>
#include <locale.h>
 int main()
 {   setlocale(LC_CTYPE, "Russian");
  
     int i, x, n;
     printf("Введите число:");
     scanf("%i", &n);
     x=1;
     for (i = 1; i<=n; i++)
     x*=i;
     printf("%i\n", x);
     return 0;
     
 
 }
