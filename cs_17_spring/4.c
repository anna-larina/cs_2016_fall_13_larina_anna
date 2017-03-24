#include <stdio.h>
#define swap(t, x, y) {t=y; y=x; x=t;}

int main()
{
	int a, b, c;
	printf("Введите Х и Y через пробел\n");
	scanf("%i %i", &a, &b);
	swap(c, a, b);
	printf("%i %i\n", a, b);

	return 0;
}
