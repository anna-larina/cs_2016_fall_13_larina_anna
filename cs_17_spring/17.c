#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double f(double *a, int x)
{
    int i;
    double min = a[1];
    double max = a[1];
    for (i = 0; i < x; i++)
    {
        if (a[i] > max)
        {  
            max = a[i];    
        }
    if (a[i] < min) 
    {
        min = a[i];
    }
    
    }
      return max-min;
    }
int main()

{
    setlocale(LC_CTYPE, "Russian");
    int i,x;
    printf("Количество элементов массива\n");
    scanf("%i", &x);
    double * a = (double *)malloc(x*8);
	printf("Введите элеенты массива через Enter:\n");
  
	for (i = 0; i <x; i++)
	scanf("%lf", &a[i]);

	printf("Разность максимального и минимального: %.3f\n", f(a,x));

  return 0;
}
