#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int opoc(char *a)

{
    setlocale(LC_CTYPE, "Russian");
    int k, s=0, i;
    k = strlen(a)-1;
    for(i=0; a[i]!='\0'; ++i)
    {
        if(a[i]=='1')
        s = s+pow(2,k);
        k--;
    }
    return s;
}
int main() 
{
    setlocale(LC_CTYPE, "Russian");
    char z[1000];
    printf("Введите двоичное число:");
    gets(z);
    printf("%d\n",opoc(z));
    return 0;
}
