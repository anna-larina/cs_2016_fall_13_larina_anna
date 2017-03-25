#include <stdio.h>
#include <string.h>
#include <locale.h>

int rightrot(int x, int n)
{
    return (x>>n);
}
int main()
{
    setlocale(LC_ALL,"Russian");
    int a, b, i;
    printf("Введите число\n");
    scanf("%d", &a);
    printf("Введите разряд\n");
    scanf("%d", &b);
    i = rightrot(a, b);
    printf("%i", i);
    return 0;
}
