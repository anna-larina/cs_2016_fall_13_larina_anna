#include <stdio.h>

int main()
{
float c, m, f;
printf( "Введите нижнюю границу:");
scanf("%f", &c);
printf("Введите верхнюю границу:");
scanf("%f", &m);
printf("   C    |    F   \n");
if (c <= m)
{
    while (c <= m)
    {
        f = 1.8*c+32;
        printf(" %.3f | %.3f \n", c, f);
        c +=1; 
    }
} 
else 
{printf( "Неверные данные!!!\n");
}
return 0;
}
