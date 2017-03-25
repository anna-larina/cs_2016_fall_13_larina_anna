#include <stdio.h>
#include <string.h>

int main()
{   int i, j=0;
    char c[1000];
    gets(c);
     for (i = 0; c[i] !='\0'; i++)
     {
         if (c[i-1] != c[i])
         
             printf("%c", c[i]);
     }
     printf("\n");
     return 0;
     
}
