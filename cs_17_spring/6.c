#include <stdio.h>
 
 int main()
 {
     int i, x, n;
     printf("Введите число:");
     scanf("%i", &n);
     x=1;
     for (i = 1; i<=n; i++)
     x*=i;
     printf("%i\n", x);
     return 0;
     
 
 }
