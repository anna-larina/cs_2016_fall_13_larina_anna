#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main()
{
setlocale(LC_CTYPE, "Russian");
    int i, k, S;
    char z[1000];
    printf("Введите число:");
    gets(z);

    for(k = strlen(z); k > 0; --k)
    {
    if(z[k-1]=='1')
    {
      S = S + pow(2,i);

      }
     i = i + 1;
    } 
    printf("%d", S);
    return 0;
}
