#include <stdio.h>

int main ()

{ 
    float a, b, c, d, x, y;
    printf ("Введите комплексное сопростивление a+bi, c+di :\n");
    scanf("%f+%fi, %f+%fi", &a, &b, &c, &d);
    x = ((a*a*c+a*c*c+a*d*d+c*b*b)/(a*a+2*a*c+c*c+b*b+2*b*d+d*d));
    y = ((a*a*d+b*c*c+b*b*d+d*d*b)/(a*a+2*a*c+c*c+b*b+2*b*d+d*d));
    printf("(%.2f)+(%.2fi)", x, y);
    
    return 0;
    
    
    
}
