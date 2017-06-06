#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define n 1000000 

float mainFunction(float x) 
{
	float function;
	function = x*x;
	return function;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float h, a, b, x;
	double S = 0;
	char z;
  	printf("Этот метод реализует численное интегрирование по методу Симпсона функции y=x^2.\n");
	printf("Введите необходимую размерность (Max:9): ");
	scanf("%c", &z);
	char string[] = "%.zf\n";
	string[2] = z;
	printf("Введите нижнюю границу: ");
	scanf("%f", &a);
	printf("Введите верхнюю границу: ");
	scanf("%f", &b);
	h = (b - a) / n;
	x = a + h;
	while (x < b)
	{
		S = S + 4 * mainFunction(x);
		x = x + h;
		if (x >= b)
			break;
		S = S + 2 * mainFunction(x);
		x = x + h;
	}

	S = ((h/3)*(mainFunction(a) + mainFunction(b) + S)); 
	printf(string ,S);
	return 0;
}
