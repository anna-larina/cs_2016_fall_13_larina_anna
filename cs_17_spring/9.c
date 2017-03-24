#include <stdio.h>

int f(int n)
{
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    return f(n-1)+f(n-2);
}
int main()
{
   int n = 0;
    int i = 0;
    printf("Введите N: ");
    scanf("%i", &n);
    for (i=1;i<=n;++i){
        printf("%i ", f(i));
    }
    return 0;
}
