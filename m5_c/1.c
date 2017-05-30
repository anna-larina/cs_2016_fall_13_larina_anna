#include <stdio.h>
#include <math.h>
#include <locale.h>
float mainFunction(float x) 
{
	float function;
	function = x*x;
	return function;
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float h, x, a, b;
	float D = 0;
	float D1 = 0;
	float D2 = 0;
  
	 printf(" Этот метод реализует численное дифференцирование по трем точкам функции y=x^2. \n");
	printf("Введите нижнюю границу интервала: ");
	scanf("%f", &a);
	printf("Введите верхнюю границу интервала: ");
	scanf("%f", &b);
	printf("Введите шаг: ");
	scanf("%f", &h);
	x = a;
	D1 = (1 / (2 * h))*((-3) * mainFunction(x) + 4 * (mainFunction(x + h)) - (mainFunction(x + 2 * h)));
	D2 = (1 / (2 * h))*(-mainFunction(x) + mainFunction(x + 2 * h));
	printf("%.3f\n", D1);
	printf("%.3f\n", D2);
	while (x + 2 * h <= b) {
		D = (1 / (2 * h))*(mainFunction(x) - 4 * (mainFunction(x + h)) + 3 * (mainFunction(x + 2 * h)));
		x = x + h;
		printf("%.3f\n", D);
	}
	return 0;
}
