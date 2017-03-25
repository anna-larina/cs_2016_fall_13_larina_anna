#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

 
 {   setlocale(LC_CTYPE, "Russian");
  
    float a, b, c, d, x, x1, x2;
    printf("Введите коэффициент а: ");
    scanf("%f", &a);
    printf("Введите коэффициент b: ");
    scanf("%f", &b);
    printf("Введите коэффициент c: ");
    scanf("%f", &c);
    
    d = b*b-4*a*c;
     
    if (d < 0)
    {
        printf("Нет вещественных корней!\n");
    }
    if (d == 0)
    {
        x=-b/(2*a);
        printf("x = %.2f", x);
    }
    
    if (d >0)
    {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
    return 0;
}
